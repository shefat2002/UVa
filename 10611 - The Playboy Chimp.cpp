#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define nl      cout << "\n";

void solve()
{
    int n;
    cin >> n;
    int lady[n];
    for(int i =0 ; i < n; i++){
        cin >> lady[i];
    }
    int q; cin >> q;
    
    for(int i = 0 ; i < q ; i++){
        int luchu , s_cng = 0 , t_cng = 0;
        ll s = 0, t = 0;
        cin >> luchu;
        for(int j = 0 ; j < n; j++){
            if(lady[j] < luchu && s < luchu){
                s = lady[j];
                s_cng = 1;
            }
            if(lady[j] > luchu){
                t = lady[j];
                break;
            }
        }
        if(s_cng == 0 ) cout << "X ";
        else cout << s << " ";
        
        if(t <= luchu ) cout << "X";
        else cout << t;
        nl;
    }

}


int main()
{
    solve();
    return 0;
}
