#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define nl      cout << "\n";
#define pi      (2*acos(0))
#define case    cout << "Case " << case_number << ": "; case_number++;
#define fast    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX_INT 1000002
#define YES     "Yes"
#define NO      "No"

int case_number = 1;
//knights move
int dr[] = {2, 2, -2, -2, 1, 1, -1, -1};
int dc[] = {1, -1, 1, -1, 2, -2, 2, -2};


void file();
/*----------------------------------------------------------------------------------------------------------------------------------------*/


void solve()
{
    
    string a, b;
    
    getline(cin , a);
    getline(cin , b);
    
    if(a == b) cout << "Yes";
    else{
        string s, t;
        int k= 0;
        for(int i = 0 ; i< a.size(); ++i){
            if(a[i] != ' ') {
                s += (a[i]); k++;
            }
        }
        k= 0;
        for(int i = 0 ; i< b.size(); ++i){
            if(b[i] != ' '){
                t += (b[i]); k++;
            }
            
        } 
        if(s==t) cout << "Output Format Error";
        else cout << "Wrong Answer";
    }
}


int main()
{
    file();
    int n; cin >> n;
    cin.ignore();
    while(n--){
        //fast;
        case;
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
