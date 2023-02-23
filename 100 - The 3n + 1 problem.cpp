#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define nl      cout << "\n";

void solve()
{
    ll a,b;
    while(cin >> a >> b){
        cout << a << ' ' << b << ' ';
        
        ll mx = -1;
        for(int i = min(a,b); i <=max(a,b); i++){
            ll j = i;
            ll cnt = 1;
            while(j !=1){
                if(j%2) j = 3*j+1;
                else j/=2;
                cnt++;
            }
            mx = max(mx,cnt);
        }
        cout << mx;nl;

    }
}

int main()
{
    solve();
    return 0;
}