#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define nl      cout << "\n";
#define pi      (2*acos(0))
#define case    cout << "Case " << case_number << ": "; case_number++;
#define caseh    cout << "Case #" << case_number << ":"; case_number++;
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

int tree(int n , int i)
{
    int pos =1;
    while(n--){
        if(i%2) pos *=2;
        else pos = pos*2+1;
        i = (i+1)/2;
    }
    return pos;
}

void solve()
{
    int n;cin >> n;
    while(n--){
        int d,i;
        cin >> d >> i;
        cout << tree(d-1,i);nl;
    }
    int minusone;
    cin >> minusone;
}

int main()
{
    file();
    int n; 
    solve();
    //cin >> n; while(n--){solve();nl}       //CF
    //cin >> t; while(t--){case;solve();nl;} // Case 
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
