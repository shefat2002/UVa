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
    double H , U , D , F;
    while(cin >> H >> U >> D >> F && H){
        double h = 0 ;
        int day = 1 , t = 0;
        double f = U*(F/100);
        double u = U;
        while(h >=0 && h < H){
            
            h += u;
            if(u >0) u -= f;
            if(h > H){
                t = 1;
                break;
            }
            h -= D;
            if(h < 0) break;
            day++;
            
        }
        
        if(t == 0) cout << "failure on day " << day << endl;
        else cout << "success on day " << day << endl;
    }
}


int main()
{
    file();
    //int n; cin >> n;
    //cin.ignore();
    //while(n--){
        //fast;
    //    case;
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
