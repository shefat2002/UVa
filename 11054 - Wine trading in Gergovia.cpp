//  بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
//  Author: Shefat - shefat2002@gmail.com
//

#include <bits/stdc++.h>
using namespace std;

#define nl                  cout << "\n";
#define ll                  long long

void solve()
{
    int n;
    while(cin >> n&&n){
        ll a[n];
        vector<pair<ll,ll>>buy,sell;
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
            if(a[i] >0)buy.push_back({a[i],i});
            else sell.push_back({a[i],i});
        }
        int i=0,j=0;
        ll work=0;
        while(buy.size()>i && sell.size() > j){
            ll w = min(buy[i].first, -sell[j].first);
            buy[i].first -=w;
            sell[j].first += w;
            ll diff = abs(buy[i].second-sell[j].second);
            work += (w*diff);
            if(buy[i].first==0)i++;
            if(sell[j].first==0)j++;
            
        }
        cout << work;nl;

    }
    
}


int main()
{
    int n; 
    solve();
    return 0;
}