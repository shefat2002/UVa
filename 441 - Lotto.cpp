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
    int n , c =0;
    while(cin >> n && n){
        int a[n];
        for(int i = 0 ; i < n ; i ++){
            cin >> a[i];
        }
        if(c) nl;
        c= 1;
        for(int i = 0 ; i < n ; i++){
            for(int j = i+1 ; j < n ; j++){
                for(int k = j+1 ; k < n ; k++){
                    for(int x = k+1 ; x < n ; x++){
                        for(int y = x+1 ; y < n ; y++){
                            for(int z = y+1 ; z< n ; z++){
                                cout << a[i] << ' ' << a[j] << ' ' << a[k] << ' ' << a[x] << ' ' << a[y] << ' ' << a[z];nl;
                            }
                        }
                    }
                }
            }
        }
        
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
