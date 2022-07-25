#include <bits/stdc++.h>
using namespace std;

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

/*
A .-    J .---  S ...   1 .---- . .-.-.- : ---...
B -...  K -.-   T -     2 ..--- , --..-- ; -.-.-.
C -.-.  L .-..  U ..-   3 ...-- ? ..--.. = -...-
D -..   M --    V ...-  4 ....- ’ .----. + .-.-.
E .     N -.    W .--   5 ..... ! -.-.-- - -....-
F ..-.  O ---   X -..-  6 -.... / -..-.     ..--.-
G --.   P .--.  Y -.--  7 --... ( -.{.      " .-..-.
H ....  Q --.-  Z --..  8 ---.. ) -.--.- @ .--.-.
I ..    R .-.   0 ----- 9 ----. & .-...
*/


void solve()
{
    string s;
    
    getline(cin, s);
    string m[2001];
    int cases , sim = 0 , space = 0 , mark[2000] = {0};
    for(int i = 0 ; i< s.length(); i++){

        if(s[i] != ' '){
            m[sim].push_back(s[i]);
            space = 0;
        }
        if(s[i] == ' '){
            sim++;
            space++;
        }
        if(space == 2){
            mark[sim-1]++;
            space = 0;
        }
        
        cases = sim+1;
    }
    for(int i = 0 ; i < cases; i++){
        if(m[i] == ".-") cout << "A";
        if(m[i] == "-...") cout << "B";
        if(m[i] == "-.-.") cout << "C";
        if(m[i] == "-..") cout << "D";
        if(m[i] == ".") cout << "E";
        if(m[i] == "..-.") cout << "F";
        if(m[i] == "--.") cout << "G";
        if(m[i] == "....") cout << "H";
        if(m[i] == "..") cout << "I";
        if(m[i] == ".---") cout << "J";
        if(m[i] == "-.-") cout << "K";
        if(m[i] == ".-..") cout << "L";
        if(m[i] == "--") cout << "M";
        if(m[i] == "-.") cout << "N";
        if(m[i] == "---") cout << "O";
        if(m[i] == ".--.") cout << "P";
        if(m[i] == "--.-") cout << "Q";
        if(m[i] == ".-.") cout << "R";
        if(m[i] == "...") cout << "S";
        if(m[i] == "-") cout << "T";
        if(m[i] == "..-") cout << "U";
        if(m[i] == "...-") cout << "V";
        if(m[i] == ".--") cout << "W";
        if(m[i] == "-..-") cout << "X";
        if(m[i] == "-.--") cout << "Y";
        if(m[i] == "--..") cout << "Z";
        if(m[i] == "-----") cout << "0";
        if(m[i] == ".----") cout << "1";
        if(m[i] == "..---") cout << "2";
        if(m[i] == "...--") cout << "3";
        if(m[i] == "....-") cout << "4";
        if(m[i] == ".....") cout << "5";
        if(m[i] == "-....") cout << "6";
        if(m[i] == "--...") cout << "7";
        if(m[i] == "---..") cout << "8";
        if(m[i] == "----.") cout << "9";
        if(m[i] == ".-.-.-") cout << ".";
        if(m[i] == "--..--") cout << ",";
        if(m[i] == "..--..") cout << "?";
        if(m[i] == ".----.") cout << "’";
        if(m[i] == "-.-.--") cout << "!";
        if(m[i] == "-..-.") cout << "/";
        if(m[i] == "-.{.") cout << "(";
        if(m[i] == "-.--.-") cout << ")";
        if(m[i] == ".-...") cout << "&";
        if(m[i] == "---...") cout << ":";
        if(m[i] == "-.-.-.") cout << ";";
        if(m[i] == "-...-") cout << "=";
        if(m[i] == ".-.-.") cout << "+";
        if(m[i] == "-....-") cout << "-";
        if(m[i] == "..--.-") cout << "_";
        if(m[i] == ".-..-.") cout << "\"";
        if(m[i] == ".--.-.") cout << "@";
        if(mark[i] > 0  ) cout << ' ' ;
    }
    cout << endl;

}


int main()
{
    file();
    int n; cin >> n;
    int i = 1;
    cin.ignore();
    while(n--){
        //fast;
        //case;
        
        cout << "Message #" << i << endl; 
        i++;
        solve();
        nl;
    }
    return 0;
}

void file()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" , "w", stdout);
    #endif
}
