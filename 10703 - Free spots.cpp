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
    int w, h , n;
    while(cin >> w >> h >> n && w || h || n){
        vector<vector<int>> arr(w, vector<int>(h,1));
        int x1 , x2 , y1 , y2;
        while(n--){
            cin >> x1 >> y1 >> x2 >> y2;
            for(int i = min(x1,x2) ; i <= max(x1, x2); i++){
                for(int j = min(y1, y2) ; j <= max(y1, y2) ; j++){
                    arr[i-1][j-1] = 0;
                }
            }        
        }
        int count = 0;

        for(int i = 0 ; i < w ; i++){
            for(int j = 0 ; j < h ;j++){
                count += arr[i][j] ;
            }
        }
        if(count ==0) cout << "There is no empty spots.";
        else if(count == 1) cout << "There is one empty spot.";
        else cout << "There are " << count << " empty spots.";
        nl;
    }   
    
}


int main()
{
    file();
    //int n; cin >> n;
    //while(n--){ 
    //    case;
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
