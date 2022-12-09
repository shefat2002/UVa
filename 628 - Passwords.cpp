//  بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
//  Author: Shefat - shefat2002@gmail.com
//

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

#define FE(i,a,b)           for (int i = (a), _b = (b); i <= _b; i++)
#define EF(i,a,b)           for (int i = (a), _b = (b); i >= _b; i--)
#define FOR(i,n)            for (int i = 0, _n = (n); i < _n; i++)
#define ROF(i,n)            for (int i = (n) - 1; i >= 0; i--)
#define ITR(it, arr)        for ( typeof(ar.begin()) it = arr.begin(); it != arr.end(); it++ )
#define mems(arr, val)      memset(arr, val, sizeof(ar))
#define len(arr)            sizeof(arr)/sizeof(arr[0])

#define case                cout << "Case " << case_number << ": "; case_number++;
#define caseh               cout << "Case #" << case_number << ": "; case_number++;
#define fast                ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define YES                 cout << "Yes"
#define NO                  cout << "No"
#define nl                  cout << "\n";
#define PI                  (acos(-1))
#define INF                 1<<30
#define eps                 1e-9

#define ll                  long long
#define ull                 unsigned long long
#define vi                  vector<int>
#define vl                  vector<ll>
#define pb                  push_back
#define po                  pop_back
#define ff                  first
#define ss                  second

int case_number = 1;
//kings move
const int dx[] = { 0, 1, -1, 0 };
const int dy[] = { -1, 0, 0, 1 };
//knights move
const int dr[] = {2, 2, -2, -2, 1, 1, -1, -1};
const int dc[] = {1, -1, 1, -1, 2, -2, 2, -2};

void file()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" , "w", stdout);
    #endif
}
/*----------------------------------------------------------------------------------------------------------------------------------------*/
vector<string>s,pass;
string form;
int n,a;


void bt(string ans, int indx, int w)
{
    if(indx == form.size()){
        pass.pb(ans);
        return;
    }
    if(form[indx] == '#'){
        bt(ans+s[w] , indx+1, w);
    }
    else{
        for(int i = 0 ; i <=9;i++){
            char c = i+'0';
            bt(ans+c, indx+1, w);
        }
    }
}

void solve()
{
    while(cin >> n){
        
        s.clear();
        pass.clear();
        s.resize(n);
        cout << "--";nl;
        FOR(i,n)cin >> s[i];
        
        cin >> a;
        FOR(i,a){
            cin >> form;
            for(int j = 0 ; j < n ;j++) bt("", 0,j);
        }
        for(auto &it : pass) cout << it << endl;
    }
}

int main()
{
    file();
    //int n; 
    solve();
    //cin >> n; while(n--){solve();nl;}
    //cin >> n; while(n--){case;nl;solve();nl;} // Case 
    //cin >> n; while(n--){caseh;solve();nl;} // Case (Case #1: )
    return 0;
}
