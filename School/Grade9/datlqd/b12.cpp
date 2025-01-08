/// A game is our childhood
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
string s;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    getline(cin, s);
    string a;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == ' ')
        {
            cout << a;
            a.erase();
            do
            {
                cout << s[i];
                i--;
            } while (s[i] >= 0 && s[i] == ' ');
        }
        if (s[i] != ' '&&i>=0)
            a = s[i] + a;
    }
    if(a.empty()==0) cout<<a;
}