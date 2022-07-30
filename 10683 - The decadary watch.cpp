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
    string s;
    while(cin >> s){
        int h, min , sec , c;
        h = (s[0]-'0')*10+ (s[1]-'0');
        min = (s[2]-'0')*10+ (s[3]-'0');
        sec = (s[4]-'0')*10+ (s[5]-'0');
        c = (s[6]-'0')*10+ (s[7]-'0');
        long long time = c *10 + sec * 1000 + min * 60000 + h*3600000;
        h = time / 8640000;
        time %= 8640000;
        min = time/86400;
        time %= 86400;
        sec = time/864;
        time %= 864;
        c = time*100/864;
        cout <<  h;
        cout << setfill('0') << setw(2)<< min;
        cout << setfill('0') << setw(2)<< sec;
        cout << setfill('0') << setw(2)<< c;
        nl;
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
