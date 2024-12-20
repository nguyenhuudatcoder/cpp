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
    cin >> s;
    int dem = 0;
    for (int i = 0; i < s.size(); i++)
    {
        while (s[i] >= '0' && s[i] <= '9' && i < s.size())
        {
            dem = dem * 10 + (s[i] - 48);
            i++;
        }
        if (dem == 0)
            cout << s[i];
        else
            while (dem > 0)
            {
                cout << s[i];
                dem--;
            }
    }
}