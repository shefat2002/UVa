#include <bits/stdc++.h>
using namespace std;
#define nl      cout << "\n";

void permute(string s,int i,int l,int h,int n)
{
    if(i==n){
        if(h==l){cout << s;nl;}
        return;
    }
    s+='0';
    permute(s,i+1,l,h,n);
    
    s[i]='1';
    permute(s,i+1,l+1,h,n);

}

void solve()
{
    int n,h;cin >>  n >> h;
    string s="";
    permute(s,0,0,h,n);
}

int main()
{
    int n; cin >> n;
    
    while(n--){ 
        solve();
        if(n>0)nl;
    }
    return 0;
}

