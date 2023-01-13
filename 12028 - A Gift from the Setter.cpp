#include <bits/stdc++.h>
using namespace std;

#define ll                  long long
#define nl                  cout << "\n";
#define fast                ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define case                cout << "Case " << case_number << ": "; case_number++;
int case_number = 1;
void file()
{
    #ifndef ONLINE_JUDGE 
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" , "w", stdout);
    #endif
}
const ll mod = 1000007;

void solve()
{
    int k,c,n,o;
    cin >> k >> c >> n >> o;
    vector<ll>a(n), b(n);
    a[0] =o;
    for(int i = 1 ; i < n ;i++){
        a[i] = (k*a[i-1]+c)%mod;
    }
    
    sort(a.begin(),a.end());
    
    ll sum = 0;
    ll ans =0;
    for(int i = 1; i < n;i++){
        sum+=abs(a[i] - a[i-1])*i;
        ans+=sum;
    }
    cout << ans;

}


int main()
{       
    file();
    //fast;
    int n; 
    //solve();
    //cin >> n; while(n--){solve();}
    cin >> n; while(n--){case;solve();nl;} // Case 

}
