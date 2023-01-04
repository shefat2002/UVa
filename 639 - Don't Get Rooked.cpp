#include <bits/stdc++.h>
using namespace std;

#define ll                  long long
#define nl                  cout << "\n";

int cnt,ans;

bool isvalid(string s[], int r, int c, int n)
{
    for(int i = c-1 ; i>=0;i--){
        if(s[r][i] == 'X') break;
        if(s[r][i] == 'O') return false;
    }
    for(int i = c+1 ; i<n;i++){
        if(s[r][i] == 'X') break;
        if(s[r][i] == 'O') return false;
    }
    for(int i = r-1 ; i>=0;i--){
        if(s[i][c] == 'X') break;
        if(s[i][c] == 'O') return false;
    }
    for(int i = r+1 ; i<n;i++){
        if(s[i][c] == 'X') break;
        if(s[i][c] == 'O') return false;
    }
    return true;
}

void bt(string s[] , int r, int c, int n)
{
    for(int i = 0 ; i < n ;i++){
        for(int j = 0 ; j < n ;j++){
            if(s[i][j] =='.' && isvalid(s,i,j,n)){
                s[i][j] = 'O';
                cnt++;
                ans = max(ans,cnt);
                bt(s,i,j+1,n);
                s[i][j] = '.';
                cnt--;
            }
        }
    }
}

void solve()
{
    int n;
    while(cin >> n && n){
        string s[n];
        for(int i = 0 ; i < n ; i++) cin >> s[i];
        cnt =0;ans =0;
        bt(s,0,0,n);
        cout << ans;nl;
    }
}
int main()
{       
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" , "w", stdout);
    #endif
    int n; 
    solve();
    //cin >> n; while(n--){solve();nl;}

}
