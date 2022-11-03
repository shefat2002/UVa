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
int v[130];
int city[110][5];

void solve()
{
    
    v['r'] = 0; v['o'] = 1;v['y'] = 2;v['g'] = 3;v['b'] = 4;
    v['P'] = 0; v['G'] = 1;v['A'] = 2;v['S'] = 3;v['N'] = 4;
    string s;
    while(1){
        int x = 0;
        while(1){
            cin >> s;
            if(s[0] =='e' || s[0] =='#') break;
            for(int i = 0 ; i <= s.size();i+=4){
                int j = i+2;
                city[x][v[s[i]]] = v[s[j]];
            }
            x++;
        }
        if(s[0] == '#') break;
        int ans = 0, diff=0 , mn = 9999;
        for(int i = 0 ; i< x; i++){
            diff = 0;
            for(int j = 0 ; j < x; j++){
                for(int k = 0 ; k < 5 ;k++){
                    if(city[i][k] != city[j][k]) diff++;
                }
            }
            if(diff < mn){
                mn = diff;
                ans = i+1;
            }
        }
        cout << ans;
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