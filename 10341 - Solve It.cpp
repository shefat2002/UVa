#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define nl      cout << "\n";
#define pi      (2*acos(0))
#define case    cout << "Case " << case_number << ": "; case_number++;
#define caseh    cout << "Case #" << case_number << ": "; case_number++;
#define fast    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX_INT 100000007
#define YES     cout << "Yes"
#define NO      cout << "No"

int case_number = 1;
//knights move
int dx[] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int dy[] = { -1, -2, -2, -1, 1, 2, 2, 1 };


void file();
/*----------------------------------------------------------------------------------------------------------------------------------------*/
double p, q ,r ,s ,t,u;
double f(double x)
{
    return p*exp(-x) + q * sin(x) +r *cos(x) +s * tan(x) +t *x*x +u;
}


void solve()
{
   
    while(cin >> p>> q >> r >> s>>t>>u){
        double l = 0, r = 1, mid;
        if(f(0) <0 || f(1) >0){
            cout << "No solution";
            continue;
        }
        while(r-l > 1e-12){
            mid = (l+r)/2;
            if(f(mid) > 0) l = mid;
            else r = mid;
        }
        cout << fixed << setprecision(4) << l;
        nl;
        
    }
    


}

int main()
{
    file();
    int n; 
    solve();
    //cin >> n; while(n--){solve();nl}       //CF
    //cin >> n; while(n--){case;solve();nl;} // Case 
    //cin >> n; while(n--){caseh;solve();nl;} // Case (Case #01: )
    return 0;
}

void file()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" , "w", stdout);
    #endif
}
