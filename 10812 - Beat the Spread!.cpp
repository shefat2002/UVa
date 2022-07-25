#include <bits/stdc++.h>
using namespace std;

#define nl      cout << "\n";
#define pi      (2*acos(0))
#define case    cout << "Case " << case_number << ": "; case_number++;
#define fast    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX_INT 1000002
#define YES     "Yes"
#define NO      "No"

int case_number = 1;
void file();
/*----------------------------------------------------------------------------------------------------------------------------------------*/


void solve()
{
    int n; cin >> n;
    while(n--){
        long long a  , b;
        cin >>a >> b;
        if(a<b) cout << "impossible" << endl;
        else{
            int x = (a+b)/2;
            int y = (a-b)/2;
            if(x>y) cout << x << ' ' << y << endl;
            else cout << "impossible" << endl;
        }

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
        //nl;
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
