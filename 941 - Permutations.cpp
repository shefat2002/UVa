#include <bits/stdc++.h>
using namespace std;

#define ll                  long long
#define nl                  cout << "\n";
#define case    cout << "Case " << case_number << ": "; case_number++;
int case_number = 1;

ll f[21];
void factorial()
{
    f[0] = 1;
    for(ll i =1 ; i < 21 ; i++) f[i] = f[i-1]*i;
}

string kth(string s, ll n)
{
    string ans ="";
    while(s.size()){
        ll a = f[s.size()-1];
        if(n/a<s.size()){
            ans.push_back(s[n/a]);
            s.erase(s.begin()+(n/a));
            n %= a;
        }
        else{
            ans+=s;break;
        }
    }
    return ans;
}

void solve()
{
    string s;cin >> s;
    sort(s.begin(),s.end());
    ll n;cin >> n;
    cout << kth(s, n);
    
}


int main()
{       
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" , "w", stdout);
    #endif
    int n; 
    factorial();
    //solve();
    cin >> n; while(n--){solve();nl;}

}
