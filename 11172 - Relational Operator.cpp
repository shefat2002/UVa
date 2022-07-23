#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    while(n--){
        long long a , b;
        cin >> a>> b;
        if(a == b) cout << "=";
        else if(a > b) cout << ">";
        else cout << "<";
        cout << endl;
    }
    return 0;
}

