#include <bits/stdc++.h>
using namespace std;

#define ll                  long long
#define nl                  cout << "\n";
#define fast                ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void file()
{
    #ifndef ONLINE_JUDGE 
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" , "w", stdout);
    #endif
}

ll l[100][20],u[100][20],c[100][20];
void solve()
{
    int n,r;
    cin >> n >> r;
    vector<string>s(n+1);
    vector<ll>b(n+1), d(n+1);
    
    map<string,ll>mp;
    for(int i = 1 ; i <= n ; i++){
        cin >> s[i];
        cin >> b[i];
        int sz;cin >> sz;
        cin >> d[i];
        for(int j= 1; j <=d[i] ; j++){

            cin >> l[i][j] >> u[i][j];
        }
        c[i][d[i]] = sz;
        
        for(int j =d[i]- 1 ; j>0 ; j--){
            c[i][j] = c[i][j+1] *(u[i][j+1] - l[i][j+1]+1);
        }
        c[i][0] = b[i];
        for(int j = 1 ; j <=d[i]; j++){
            c[i][0] -= c[i][j]*l[i][j];
        }
        
        mp[s[i]] = i;
        
    }
    //cin.ignore();
    for(int i = 0 ; i< r ;i++){
        ll ans=0;
        string ss;cin >> ss;
        ll x = mp[ss];
        ans += c[x][0];
        cout << ss << '[';
        
        for(int j =1; j<=d[x] ;j++){
            int a;
            cin >>a;
            cout << a;
            if(j !=d[x]) cout << ", ";
            ans+= c[x][j] *a;
        }
        cout << "] = " << ans;nl;
        
        
    }


}


int main()
{       
    file();
    //fast;
    int n; 
    solve();
    //cin >> n; while(n--){solve();}

}
