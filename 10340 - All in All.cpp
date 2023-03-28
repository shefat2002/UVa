//  بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
//  Author: Shefat - shefat2002@gmail.com
//

#include <bits/stdc++.h>
using namespace std;

#define nl                  cout << "\n";
void solve()
{
    string s, ss;
    while(cin >> s >> ss){
        int n = s.size();
        int j =0;
        for(int i = 0; i < ss.size() ; i++){
            if(ss[i]== s[j]){
                j++;
            }
            if(j==n)break;
        }
        if(n==j) cout << "Yes";
        else cout << "No";nl;
    }   
}


int main()
{
    solve();
    return 0;
}