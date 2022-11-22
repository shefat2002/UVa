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
int dr[] = {2, 2, -2, -2, 1, 1, -1, -1};
int dc[] = {1, -1, 1, -1, 2, -2, 2, -2};


void file();
/*----------------------------------------------------------------------------------------------------------------------------------------*/



void solve()
{
    int d,n;cin >> d >> n;
    int a[1025][1025] = {0};
    int x , y , s;
    for(int i = 0 ; i < n ; i++){
        cin >> x >> y >>  s;
        for(int j = x-d; j<= x+d; j++){
            for(int k = y-d ; k <= y+d ; k++){
                if(j >=0 && j <= 1024 && k >=0 && k <=1024)
                    a[j][k] +=s;
            }
        }
    }
    int mx= -1, mxx, mxy;
    for(int i = 0 ; i <= 1024; i++){
        for(int j = 0; j <=1024 ; j++){
            if(a[i][j] > mx){
                mx = a[i][j];
                mxx  = i;
                mxy = j;
            }
        }
    }
    
    cout << mxx << ' ' << mxy << ' ' << mx;


}


int main()
{
    file();
    int n; 
    //solve();
    cin >> n; while(n--){solve();nl;}
    //cin >> n; while(n--){case;solve();nl;} // Case 
    //cin >> n; while(n--){case;solve();nl;} // Case (Case #01: )
    return 0;
}

void file()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" , "w", stdout);
    #endif
}
