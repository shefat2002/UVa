#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    while(cin >> n){
        int  count = n;
        while(n>=3){
            count += n/3;
            n = n/3 + n%3;
        }
        if(n == 2) count++;
        cout << count << endl;
    }
}


int main()
{
    solve();
    return 0;
}

