#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define nl      cout << "\n";
#define pi      (2*acos(0))
#define case    cout << "Case " << case_number << ": "; case_number++;
#define fast    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX_INT 100000007
#define YES     cout << "Yes"
#define NO      cout << "No"

int case_number = 1;
//knights move
int dr[] = {2, 2, -2, -2, 1, 1, -1, -1};
int dc[] = {1, -1, 1, -1, 2, -2, 2, -2};


void file();
/*----------------------------------------------------------------------------------------------------------------------------------------*/

bool check(int a , int b)
{
    set<char>c;
    string s1 = to_string(a);
    string s2 = to_string(b);
    bool mark1 = true , mark2= true;
    for(int i = 0 ; i < s1.size(); i++){
        c.insert(s1[i]);
        if(s1[i] == '0') mark1 = false;
    }
    for(int i = 0 ; i < s2.size(); i++){
        c.insert(s2[i]);
        if(s2[i] == '0') mark2 = false;
    }
    if(c.size() == 10) return true;
    if(c.size() == 9 && mark2 && mark1 && s1.size() ==4) return true;
    
   
    return false;
}

int first = 0;
void solve()
{
    int n;
    while(cin >> n && n){
        bool mark = true;
        if(first !=0) nl;
        first = n;
        for(int i = 1234 ; i*n < 99999 ; i++){
            int de = i * n;
            if(check(i, de)){
                cout << fixed << setfill('0') << setw(5) << de << " / " << fixed << setfill('0') << setw(5) << i << " = " << n;nl;
                mark =false;
            }
        }
        if(mark) cout << "There are no solutions for " << n << '.'<< endl;
        
        
    }
}


int main()
{
    file();
    int n; 
    solve();
    //cin >> n; while(n--){solve();nl;}
    //cin >> n; while(n--){case;solve();nl;} // Case 

    return 0;
}

void file()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" , "w", stdout);
    #endif
}
