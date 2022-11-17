#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define nl      cout << "\n";
#define pi      (2*acos(0))
#define case    cout << "Case " << case_number << ": "; case_number++;
#define caseh    cout << "Case #" << case_number << ":"; case_number++;
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

void solve()
{
    string s, temp ;
    int ans, pos;
    string str[22];
    while(cin >> s){
        temp = s;
        str[10] = s;
        int ans =0;
        for(int i = 9 ; i >=0 ;i--){
            prev_permutation(s.begin(), s.end());
            str[i] = s;
        }
        s = temp;
        for(int i = 11 ; i < 21 ;i++){
            next_permutation(s.begin(), s.end());
            str[i] = s;
        }
        for(int i = 0 ; i < 21 ; i++){
            int mn = INT_MAX;
            for(int j = 0 ; j < str[0].length() -1 ; j++){
                int temp = abs(str[i][j] - str[i][j+1]);
                mn = min(mn, temp);
            }
            if(mn > ans){
                ans = mn;
                pos = i;
            }
        }
        cout << str[pos] << ans;nl;
    }
}

int main()
{
    file();
    int n; 
    solve();
    //cin >> n; while(n--){solve();nl}       //CF
    //cin >> t; while(t--){case;solve();nl;} // Case 
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
