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
    int n, p;
    int index = 1 ;
    
    while(cin >> n >> p && n && p){
        string req, req2;
        cin.ignore();
        for(int i = 0; i < n ;i++){
            getline(cin, req);
        }
        string prp , acpt;
        int d, mxd = -1;
        double r, mnr;
        while(p--){
            getline(cin, prp);
            cin >> r >> d;
            cin.ignore();
            if(d > mxd){
                mxd = d;
                acpt = prp;
                mnr  = r;
            }
            else if(d == mxd && r < mnr){
                mnr = r;
                acpt = prp;
            }
            for(int i = 0 ; i < d ; i++){
                getline(cin , req2);
            }
        }
        if(index >1) nl;
        cout << "RFP #" << index++ ;nl;
        cout << acpt; nl;
        //cin.ignore();
    }
    

}


int main()
{
    file();
    int n; 
    //cin >> n; while(n--){
    //    case;nl;
        solve();
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
