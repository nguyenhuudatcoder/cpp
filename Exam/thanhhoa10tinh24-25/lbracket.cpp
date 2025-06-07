/// Made by Nguyễn Hữu Đạt
#include <iostream>
#include <climits>
#include <string>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
string s;
int ans, l, r, a[1000005];
#include <queue>
deque<char> d;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin >> s;
    s = ' ' + s;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == '(')
            d.push_back(i);
        else if (!d.empty())
        {
            a[i] = a[d.back() - 1] + i - d.back() + 1;
            d.pop_back();
        }
    }
    for (int i = 1; i < s.size(); i++)
        if (a[i] > ans)
            ans = a[i], l = i - a[i] + 1, r = i;
    if (ans == 0)
        cout << ans;
    else
        cout << ans << '\n'
             << l << ' ' << r;
}