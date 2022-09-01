#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define nl      cout << "\n";
#define pi      (2*acos(0))
#define case    cout << "Case " << case_number << ": "; case_number++;
#define fast    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX_INT 1000000007
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
    int n , case_ = 1;
    while(cin >> n && n){
        int mob[100007] = {0};
        cout << "Case " << case_ << ":";nl;
        case_++;
        for(int i = 0 ; i < n ; i++){
            cin >> mob[i];
        }
        for(int i = 0 ; i < n ; i++){
            if(mob[i]+1 != mob[i+1]) cout << 0 << mob[i] << endl;
            else{
                cout << 0 << mob[i] << "-";
                int first = i;
                while(mob[i]+1 == mob[i+1] && i+1 <n){
                    i++;
                }
                int last = i;
                string fth = to_string(mob[first]);
                string lth = to_string(mob[last]);
                string to;
                for(int j = 0 ; j <= fth.length(); j++){
                    if(fth[j] != lth[j]){
                        while(j<fth.length()){
                            to+= lth[j];
                            j++;
                        }
                    }
                }
                cout << to;nl;
            }
        }
        nl;
    }
    
}


int main()
{
    file();
    int n; 
    solve();
    //cin >> n; while(n--){solve();nl;}
    //cin >> n; while(n--){case;solve();nl;} // Case 

    return 0;
}

void file()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" , "w", stdout);
    #endif
}
