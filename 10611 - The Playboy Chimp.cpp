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
    cin >> n;
    int lady[n];
    for(int i =0 ; i < n; i++){
        cin >> lady[i];
    }
    int q; cin >> q;
    
    for(int i = 0 ; i < q ; i++){
        int luchu , s_cng = 0 , t_cng = 0;
        ll s = 0, t = 0;
        cin >> luchu;
        for(int j = 0 ; j < n; j++){
            if(lady[j] < luchu && s < luchu){
                s = lady[j];
                s_cng = 1;
            }
            if(lady[j] > luchu){
                t = lady[j];
                break;
            }
        }
        if(s_cng == 0 ) cout << "X ";
        else cout << s << " ";
        
        if(t <= luchu ) cout << "X";
        else cout << t;
        nl;
    }

}


int main()
{
    file();
    //int n; cin >> n;
    
    //while(n--){
        //fast;
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
