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
    int n, m, c ;
    while(cin >> n >> m >> c && n && m && c){
        int amp[22], op;
        bool safe= true, on[22];
        for(int i = 1 ; i <= n; i++){
            cin >> amp[i];
            on[i] = false;
        }
        int current = 0, mx = -1;
        for(int i = 1 ; i<=m ; i++){
            cin >> op;
            if(on[op]) current -= amp[op];
            else{
                current += amp[op];
                if(mx < current) mx = current;
                if(current > c) safe = false;
            }
            on[op] = !on[op];
        }
        cout << "Sequence " << case_number;
        nl;
        case_number++;
        if(safe) cout << "Fuse was not blown." << endl <<"Maximal power consumption was " << mx <<" amperes.";
        else cout << "Fuse was blown.";
        nl;
        nl;
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
    //    nl;
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
