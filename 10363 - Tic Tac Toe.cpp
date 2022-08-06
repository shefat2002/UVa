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

bool turn(char tic[3][3] , char c)
{
    if(tic[0][0] == c && tic[0][1] == c && tic[0][2] == c) return true;
    if(tic[1][0] == c && tic[1][1] == c && tic[1][2] == c) return true;
    if(tic[2][0] == c && tic[2][1] == c && tic[2][2] == c) return true;
    if(tic[0][0] == c && tic[1][0] == c && tic[2][0] == c) return true;
    if(tic[0][1] == c && tic[1][1] == c && tic[2][1] == c) return true;
    if(tic[0][2] == c && tic[1][2] == c && tic[2][2] == c) return true;
    if(tic[0][0] == c && tic[1][1] == c && tic[2][2] == c) return true;
    if(tic[0][2] == c && tic[1][1] == c && tic[2][2] == c) return true;
    return false;
}

void solve()
{
    char tic[3][3];
    int X = 0 , O = 0;
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cin >> tic[i][j];
            if(tic[i][j] == 'X') X++;
            else if(tic[i][j] == 'O') O++;
        }
    }
    bool mark = true;
    if(X == O){
        if(turn(tic, 'X')) mark = false;
    }
    else if(X == O+1){
        if(turn(tic, 'O')) mark = false;
    }
    else mark = false;
    if(mark)cout << "yes";
    else cout << "no";
    nl;

}


int main()
{
    file();
    int n; cin >> n;
    
    while(n--){
        //fast;
        //case;
        solve();
        //nl;
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
