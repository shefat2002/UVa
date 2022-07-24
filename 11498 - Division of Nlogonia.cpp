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
    int n;
    while(cin >> n && n != 0){
        int  x , y;
        cin >> x >> y;
        for(int i = 0 ; i < n ; i++){
            int a , b;
            cin >> a >> b;
            if(a == x || b == y) cout << "divisa";
            else if(a > x && b > y) cout << "NE";
            else if(a < x && b > y) cout << "NO";
            else if(a > x && b < y) cout << "SE";
            else if(a < x && b < y) cout << "SO";
            cout << endl;
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
        //nl;
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
