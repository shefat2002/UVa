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
void file();
/*----------------------------------------------------------------------------------------------------------------------------------------*/


void solve()
{
    string s;
    while(getline(cin ,s)){

        vector<string>word;
        int n = 0;
        string temp;
        for(int i = 0 ;  i < s.length() ; i++){
            if(s[i] != ' '){
                temp.push_back(s[i]);
            }
            else{
                word.push_back(temp);
                temp.erase();
            }
        }
        word.push_back(temp);
        string rev;
        for(auto &pt: word){
            //cout << pt << ' ' ;
            reverse(pt.begin(), pt.end());
            cout << pt << ' ';
        }
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
