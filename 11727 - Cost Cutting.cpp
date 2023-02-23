#include <bits/stdc++.h>
using namespace std;

#define nl                  cout << "\n";
#define case                cout << "Case " << case_number << ": "; case_number++;
int case_number = 1;

void solve()
{
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a,a+3);
    cout << a[1];
}

int main()
{   
    int n;
    cin >> n; while(n--){case;solve();nl;} // Case 
}