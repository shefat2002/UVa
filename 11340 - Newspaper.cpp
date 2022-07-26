#include <bits/stdc++.h>
using namespace std;

#define nl      cout << "\n";
#define pi      (2*acos(0))
#define case    cout << "Case " << case_number << ": "; case_number++;
#define fast    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX_INT 1000002
#define YES     "Yes"
#define NO      "No"

int case_number = 1;
void file();
/*----------------------------------------------------------------------------------------------------------------------------------------*/


void solve()
{
    int n;
    cin >> n;
    map<char , double> m;
    for(int i = 0 ; i < n ;i++){
        int x;
        char c;
        cin >> c >> x;
        m[c] = x;
    }
    
    int line; cin >> line;
    cin.ignore();
    string s;
    map<char, double> letter;
    for(int i = 0 ; i < line ; i++){
        getline(cin, s);
        //cout << s << endl;
        for(int j = 0 ; j < s.length() ; j++){
            letter[s[j]]++;
        }
    }
    /*
    for(auto &fnd : letter){
            cout << fnd.first << " " << fnd.second << endl;
    }
    */
    int count  = 0;
    for(auto &dta : m){
        for(auto &fnd : letter){
            if(dta.first == fnd.first){
                count += (dta.second * fnd.second);
            }
        }
    }
    cout << fixed << setprecision(2) << (count/100.0) <<"$";


}


int main()
{
    file();
    int n; cin >> n;
    while(n--){
        //fast;
        //case;
        solve();
        nl;
    }
    return 0;
}

void file()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" , "w", stdout);
    #endif
}
