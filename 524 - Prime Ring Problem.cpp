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

#define case                cout << "Case " << case_number << ":"; case_number++;
#define caseh               cout << "Case #" << case_number << ": ";nl; case_number++;
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

const int N = 52;
bool prime[N];
bool visited[N];
int n;
int a[N];
void sieve()
{
    memset(prime, true, sizeof(prime));
    for(int i =2; i*i <= N ; i++){
        if(prime[i] ==true){
            for(int j = i*i ; j<= N ;j+=i){
                prime[j] =false;
            }
        }
    }
}
void bt(int x)
{
    if(x == n && prime[a[n-1]+1]){
        for(int i =0 ; i<n ;i++){
            if(i!=n-1)cout << a[i] << ' ';
            else cout << a[i] << endl;

        }
        return;
    }
    else{
        for(int i =2 ; i<=n; i++){
            if(!visited[i] && prime[a[x-1]+i]){
                a[x] =i;
                visited[i] = true;
                bt(x+1);
                visited[i] =false;
            }
        }
    }
}

void solve()
{
    sieve();
    int mark =0;
    while(cin >> n){
        a[0] = 1;
        if(mark) nl;
        mark =1;
        case;nl;
        bt(1);
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
