#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define nl      cout << "\n";
#define pi      (2*acos(0))
#define case    cout << "Case " << case_number << ": "; case_number++;
#define fast    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX_INT 1000002
#define YES     "Yes"
#define NO      "No"

int case_number = 1;
//knights move
int dr[] = {2, 2, -2, -2, 1, 1, -1, -1};
int dc[] = {1, -1, 1, -1, 2, -2, 2, -2};


void file();
/*----------------------------------------------------------------------------------------------------------------------------------------*/


void solve()
{
    int n  , m;
    while(cin >> n >> m && n !=0 && m !=0){
        int head[n] , height[m], t =0;
        for(int i = 0 ; i< n ; i++){
            cin >> head[i];
        }
        for(int i = 0 ; i< m ; i++){
            cin >> height[i];
        }
        sort(head, head+n);
        sort(height, height+m);
        int cost = 0;
        for(int i = 0 ; i < m ; i++){
            if(t < n && height[i] >= head[t]){
                cost += height[i];
                t++;
            }
        }
        if(t == n) cout << cost;
        else cout << "Loowater is doomed!";
        nl;
    }
}


int main()
{
    file();
    int n; 
    //cin >> n; while(n--)
        solve();

    return 0;
}

void file()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" , "w", stdout);
    #endif
}
