/// Made by Nguyễn Hữu Đạt
// Knapsacks Dynamic Programme
#include <iostream>
#include <climits>
#include <algorithm>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, v, tix = 1e9;
struct bandit
{
    int h;
    int t;
};
bandit a[1005];
ll dp[10005][1005];
void solve()
{
    int maxx = -1;
    for (int i = 0; i < n; i++)
        maxx = max(maxx, a[i].h);
    for (int i = 0; i < n; i++)
        dp[1][i] = -1;
    for (int j = 0; j < n; j++)
    {
        for (int i = 1; i <= v; i++)
        {
            dp[i][j] = dp[i][j - 1];
            if (i - a[j].t >= 0 && dp[i - a[j].t][j] >= 0)
                dp[i][j] = max(dp[i][j], dp[i - a[j].t][j - 1] + a[j].h);
            if (dp[i][j] >= maxx)
                tix = min(tix, i);
        }
    }
    if (tix == 1e9)
        cout << -1;
    else
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
    for (int i = 0; i < n; i++)
        cin >> a[i].h;
    for (int i = 0; i < n; i++)
        cin >> a[i].t;
    solve();
}