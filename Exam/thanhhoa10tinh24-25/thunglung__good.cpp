/// Made by Nguyễn Hữu Đạt
#include <iostream>
#include <climits>
#include <algorithm>
#include <cmath>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, v, h[25], t[25], tix = 1000000;
bool used[25];
void Deepseek(int mask)
{
    int power = 0, gold = 0;
    for (int i = 1; i <= n; i++)
        if (mask & (1 << (i - 1)))
            power += h[i], gold += t[i];
    if (gold > v)
        return;
    for (int i = 1; i <= n; i++)
        if (h[i] > power)
            return;
    if (tix > gold)
    {
        tix = min(tix, gold);
        // for (int i = 1; i <= n; i++)
        //     if (mask & (1 << (i - 1)))
        //         used[i] = 1;
        //     else
        //         used[i] = 0;
    }
}
void solve()
{
    for (int mask = 0; mask < (1 << n); mask++)
        Deepseek(mask);
    if (tix == 1000000)
        tix = -1;
    // for (int i = 1; i <= n; i++)
    //     if (used[i])
    //         cout << h[i] << ' ';
    // cout << '\n';
    cout << tix;
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> v;
    for (int i = 1; i <= n; i++)
        cin >> h[i];
    for (int i = 1; i <= n; i++)
        cin >> t[i];
    solve();
}