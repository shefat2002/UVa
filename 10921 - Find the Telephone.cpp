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
    string s;
    while(getline(cin, s)){
        string t;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] >= 'A' && s[i] <='C') t.push_back('2');
            else if(s[i] >= 'D' && s[i] <='F') t.push_back('3');
            else if(s[i] >= 'G' && s[i] <='I') t.push_back('4');
            else if(s[i] >= 'J' && s[i] <='L') t.push_back('5');
            else if(s[i] >= 'M' && s[i] <='O') t.push_back('6');
            else if(s[i] >= 'P' && s[i] <='S') t.push_back('7');
            else if(s[i] >= 'T' && s[i] <='V') t.push_back('8');
            else if(s[i] >= 'W' && s[i] <='Z') t.push_back('9');
            else t.push_back(s[i]);            
        }
        cout << t << endl;
    }    

}


int main()
{
    file();
    //int n; cin >> n;
    //while(n--){
        //fast;
        //case;
        solve();
        //nl;
    //}
    return 0;
}

void file()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" , "w", stdout);
    #endif
}
