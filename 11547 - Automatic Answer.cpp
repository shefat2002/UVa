#include <bits/stdc++.h>
using namespace std;

#define nl cout << "\n";
#define pi (2*acos(0))
#define case cout << "Case " << case_number << ": "; case_number++;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX_INT 1000002
#define YES "Yes"
#define NO "No"

int case_number = 1;

/*----------------------------------------------------------------------------------------------------------------------------------------*/

void file();


void solve()
{
    int a;
    cin >> a;
    int c = (((((a*567)/9)+7492) *235)/47)-498;
    if(c < 0) c *= - 1;
    cout << (c / 10 ) % 10;
}

int main()
{
    file();
    int n; cin >> n;
    while(n--){
    //    fast;
        //case;
        solve();
        nl;
    }
    return 0;
}

void file()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" , "w", stdout);
    #endif
}
