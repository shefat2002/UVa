#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define nl      cout << "\n";
#define pi      (2*acos(0))
#define case    cout << "Case " << case_number << ": "; case_number++;
#define fast    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX_INT 1000000007
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
        if(s[0] >= '0' && s[0] <='9'){
            int n = stoi(s);
            while(n){
                if(n>=1000){
                    cout << "M";
                    n-=1000;
                }
                else if(n>=900){
                    cout << "CM";
                    n-=900;
                }
                else if(n>=500){
                    cout << "D";
                    n-=500;
                }
                else if(n>=400){
                    cout << "CD";
                    n-=400;
                }
                else if(n>=100){
                    cout << "C";
                    n-=100;
                }
                else if(n>=90){
                    cout << "XC";
                    n-=90;
                }
                else if(n>=50){
                    cout << "L";
                    n-=50;
                }
                else if(n>=40){
                    cout << "XL";
                    n-=40;
                }
                else if(n>=10){
                    cout << "X";
                    n-=10;
                }
                else if(n>=9){
                    cout << "IX";
                    n-=9;
                }
                else if(n>=5){
                    cout << "V";
                    n-=5;
                }
                else if(n>=4){
                    cout << "IV";
                    n-=4;
                }
                else if(n>=1){
                    cout << "I";
                    n-=1;
                }
            }
        }
        
        else{
            int num = 0, temp = 0, d;
            map<char, int> mp;
            mp['I'] = 1; mp['V'] = 5; mp['X'] = 10; mp['L'] = 50; mp['C'] = 100; mp['D'] = 500; mp['M'] = 1000;
            for(int i = s.size()-1; i >=0 ; i--){
                d = mp[s[i]];
                
                if(d>=temp) num+= d;
                else num -=d;
                temp = d;
            }
            cout << num;

        }
        nl;
    }

}


int main()
{
    file();
    int n; 
    solve();
    //cin >> n; while(n--){solve();nl;}     // CF
    //cin >> n; while(n--){case;solve();nl;}  // Case 

    return 0;
}

void file()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" , "w", stdout);
    #endif
}
