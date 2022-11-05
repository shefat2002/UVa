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
int dx[] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int dy[] = { -1, -2, -2, -1, 1, 2, 2, 1 };


void file();
/*----------------------------------------------------------------------------------------------------------------------------------------*/

void solve()
{
    string s;
    while(cin >> s){
        if(s == "*") return;
        case ;
        string s1 = "Hajj-e-Akbar", s2="Hajj-e-Asghar";
        if(s == "Hajj") cout << s1;
        else cout << s2;
        nl;
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
