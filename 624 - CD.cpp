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
int N, sum = 0;
vector<int>a, ans, temp;

void backtrack(int i, int s)
{
    if(i == a.size()){
        if(s > sum){
            sum = s;
            ans = temp;
        }
        return;
    }
    if(s+a[i] <= N){
        temp.push_back(a[i]);
        backtrack(i+1, s+a[i]);
        temp.pop_back();
    }
    backtrack(i+1, s);
}

void solve()
{
    while(cin >> N){
        int n; cin >> n;
        sum = 0;
        a.resize(n);
        for(int i = 0 ; i < n ;i++) cin >> a[i];
        backtrack(0,0);
        for(auto i: ans) cout << i << ' ';
        cout << "sum:" << sum;
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
