#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define nl      cout << "\n";
#define pi      (2*acos(0))
#define case    cout << "Case " << case_number << ": "; case_number++;
#define fast    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX_INT 1000000007
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
    int n , m;
    while(cin >> n >> m && n){
        int f[n] , r[m];
        for(int i = 0 ; i < n ;i++) cin >> f[i];
        for(int i = 0 ; i < m ;i++) cin >> r[i];
        
        vector<double> sp;

        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                sp.push_back(1.0*r[i]/f[j]);
            }
        }
        double mx = -1;
        sort(sp.begin(), sp.end());
        for(int i = 0 ; i < sp.size()-1 ;i++) mx = max(mx, sp[i+1]/sp[i]);
        cout << fixed << setprecision(2) << mx;nl;
    }
    
}


int main()
{
    file();
    int n; 
    solve();
    //cin >> n; while(n--){solve();nl;}
    //cin >> n; while(n--){case;solve();nl;} // Case 

    return 0;
}

void file()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" , "w", stdout);
    #endif
}
