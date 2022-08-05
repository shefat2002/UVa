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
    
    int n;
    while(cin >> n && n !=0){
        int st[n+3];
        for(int i = 0 ; i < n ;i++){
            cin >> st[i];
        }
        sort(st, st+n);
        
        int mark = 0;
        for(int i = 0 ; i < n-1 ; i++){
            if(st[i+1] - st[i] > 200){
                mark = 1;
            }
        }
        if(mark == 0 && (1422-st[n-1])*2 < 200) cout << "POSSIBLE";
        else cout << "IMPOSSIBLE";
            
        nl;
        
    }

}


int main()
{
    file();
    //int n; cin >> n;
    //while(n--){
        //fast;
        //case;
        solve();
    //    nl;
    //}
    return 0;
}

void file()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" , "w", stdout);
    #endif
}
