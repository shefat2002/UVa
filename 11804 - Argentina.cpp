#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define nl      cout << "\n";
#define pi      (2*acos(0))
#define case    cout << "Case " << case_number << ":"; case_number++;
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

bool cmp(pair<pair<int,int>,string>a , pair<pair<int,int>,string>b)
{
    if(a.first.first != b.first.first){
        if(a.first.first < b.first.first) return false;
        return true;
    }
    else{
        if(a.first.second != b.first.second){
            if(a.first.second > b.first.second) return false;
        }
        else{
            if(a.second > b.second) return false;
        }
        return true; 
    }
}



void solve()
{
    pair<pair<int,int>, string> p[10];
    vector<string> attacker, defender;
    for(int i = 0 ; i< 10 ; i++){
        int atk, def;
        string name;
        cin >> name >> atk >> def;
        p[i] = {{atk,def}, name};
    }
    sort(p, p+10, cmp);
    /*
    for(int i = 0 ; i < 10 ; i++){
        cout << p[i].first.first << " " << p[i].first.first << " " << p[i].second;
        nl;
    }
    */
    for(int i =0 ; i < 5;i++) attacker.push_back(p[i].second);
    for(int i =5 ; i < 10;i++) defender.push_back(p[i].second);

    sort(attacker.begin(), attacker.end());
    sort(defender.begin(), defender.end());

    cout << "(";
    for(int i = 0 ; i < 4 ; i++){
        cout << attacker[i] << ", ";
    }
    cout << attacker[4] << ")";nl;
    cout << "(";
    for(int i = 0 ; i < 4 ; i++){
        cout << defender[i] << ", ";
    }
    cout << defender[4] << ")";



}


int main()
{
    file();
    int n; 
    //solve();
    //cin >> n; while(n--){solve();nl;}
    cin >> n; while(n--){case;nl;solve();nl;} // Case 

    return 0;
}

void file()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" , "w", stdout);
    #endif
}
