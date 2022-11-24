#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <set>
#include <map>
#include <vector>
#include <string>
#include <cmath>
#include <cstring>
#include <queue>
#include <stack>
#include <algorithm>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cctype>
#include <limits>
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
int dr[] = {2, 2, -2, -2, 1, 1, -1, -1};
int dc[] = {1, -1, 1, -1, 2, -2, 2, -2};


void file();
/*----------------------------------------------------------------------------------------------------------------------------------------*/


void solve()
{
    int t,r,h;
    while(cin >> t >> r >> h){
        int T[t] , R[r] , H[h];
        bool tr[t][r] ={1}, rh[r][h] ={1}, ht[h][t]={1};
        for(int i = 0 ; i < t ; i++){
            cin >> T[i];
            for(int j = 0 ; j < r ; j++){
                cin >> tr[i][j];
            }
            
        }
        for(int i = 0 ; i < r ; i++){
            cin >> R[i];
            for(int j = 0 ; j < h ; j++){
                cin >> rh[i][j];
            }
            
        }
        for(int i = 0 ; i < h ; i++){
            cin >> H[i];
            for(int j = 0 ; j < t ; j++){
                cin >> ht[i][j];
            }
            
        }
        int price = INT_MAX;
        int tt=-1,rr=-1,hh=-1;
        for(int i = 0 ; i < t ; i++){
            for(int j = 0 ; j < r ; j++){
                if(!tr[i][j]){
                    for(int k = 0 ; k < h ; k++){
                        if(!rh[j][k]&& !ht[k][i]){
                            int sum = T[i]+ R[j] + H[k];
                            if(sum<price){
                                price = sum;
                                tt = i;rr = j; hh = k;
                            }
                        }
                    }
                }
            }
        }
        if(tt == -1 || rr ==-1 || hh == -1) cout << "Don't get married!";
        else cout << tt << ' ' << rr << ' ' << hh << ":" << price;
        nl;
    }

}


int main()
{
    file();
    int n; 
    solve();
    //cin >> n; while(n--){solve();nl;}
    //cin >> n; while(n--){case;nl;solve();nl;} // Case 
    //cin >> n; while(n--){caseh;solve();nl;} // Case (Case #1: )
    return 0;
}

void file()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" , "w", stdout);
    #endif
}
