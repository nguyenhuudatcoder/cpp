/// Made by Nguyễn Hữu Đạt
#include <iostream>
#include <climits>
#include <algorithm>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, v;
struct bandit
{
    int h;
    int t;
};
bandit a[1005];
ll dp[10005];
void solve()
{
    int maxx = -1;
    for (int i = 0; i < n; i++)
        maxx = max(maxx, a[i].h);
    // sort(a,a+n,cmp);
    // dp[0]=0;
    for (int coin = 1; coin <= v; coin++)
    {
        // if(coin>0)
        dp[coin] = -1;
        for (int j = 0; j < n; j++)
        {
            if (coin - a[j].t >= 0 && dp[coin - a[j].t] >= 0)
                dp[coin] = max(dp[coin], dp[coin - a[j].t] + a[j].h);
        }
        if (dp[coin] >= 1ll*maxx)
        {
            cout<<dp[coin]<<'\n';
            cout << coin;
            exit(0);
        }
    }
    cout << -1;
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
