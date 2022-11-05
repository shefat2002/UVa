#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define nl      cout << "\n";
#define pi      (2*acos(0))
#define case    cout << "Case " << case_number << ": "; case_number++;
#define caseh    cout << "CASE# " << case_number << ":"; case_number++;
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
    int n, q;
    while(cin >> n>> q && n && q){
        caseh;nl;
        vector<int> a(n);   
        for(int i = 0 ; i< n ; i++) cin >> a[i];
        sort(a.begin(), a.end());
        for(int i = 0 ; i< q ; i++){
            int x;
            cin >> x;
            int pos, mark =0;
            for(int j = 0 ; j < n; j++){
                if(a[j] == x){
                    pos = j+1;
                    mark =1;
                    break;
                }
            }
            if(mark) cout << x << " found at " << pos; 
            else cout << x << " not found";
            nl;
        }
        

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
