#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define ll long long

int code(char c)
{
    if(c == 'B' || c == 'P' ||c == 'F' ||c == 'V'  ) return 1;
    if(c == 'C' || c == 'S' || c == 'K'|| c == 'G'|| c == 'J'|| c == 'Q'|| c == 'X'|| c == 'Z') return 2;
    if(c == 'D'|| c == 'T') return 3;
    if(c == 'L' ) return 4;
    if(c == 'M'|| c == 'N') return 5;
    if(c == 'R') return 6;
    else return 0;
}

void solve()
{
    string s;
    map<char, int> m;
    for(int i = 0 ; i < 26; i++){
        m[i+'A'] = code(i+'A');
    }
    cout << setw(13) << "NAME" << setw(33) <<"SOUNDEX CODE";nl;
    while(cin >> s){
        cout << setw(9+s.size()) << s;
        string output;
        output[0] = s[0];
        for(int i = 1 ; i <=3;i++) output[i] = '0';
        for(int i = 1,j =1; i < s.length() && j <=3; i++){
            if(m[s[i]] > 0 && m[s[i]] != m[s[i-1]]){
                output[j] = '0'+ m[s[i]];
                j++;
            }
        }
        cout << setw(26-s.size()) << output[0] << output[1] << output[2] << output[3];
        nl;
    }
    cout << setw(19) << " " << "END OF OUTPUT";
    nl;
}

int main()
{
    
    solve();
    return 0;

}