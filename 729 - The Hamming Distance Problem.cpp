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

vector<vector<int>> ans;

void permute(int a[] , int n)
{
    do{
        for(int i = 0 ; i < n ;i++) cout << a[i];nl;
    }while(next_permutation(a,a+n));
    
}

void solve()
{
    int n, h; cin >> n >> h;
    int ham[n];
    for(int i = 0 ; i< n -h ;i++){
        ham[i] = 0;
    }
    for(int i = n-h; i< n ; i++){
        ham[i] = 1;
    }
    permute(ham, n);

    
}


int main()
{
    file();
    int n; cin >> n;
    
    while(n--){ 
        //fast;
        //case;
        solve();
        if(n>0)nl;
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
