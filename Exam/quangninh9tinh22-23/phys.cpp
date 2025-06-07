// legit code
#include <iostream>
#include <climits>
#include <algorithm>
#include <cmath>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
int p[3005];
ll ans;
int f[3005], g[3005];
void build()
{
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
            f[i] += (p[i] >= p[j]);
    for (int i = n; i > 0; i--)
        for (int j = i; j <= n; j++)
            g[i] += (p[i] <= p[j]);
}
void solve()
{
    build();
    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            ans += max({abs(p[j] - p[i]), j - f[i], n - g[j] - i + 1});
    cout << ans;
}
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> p[i];
    solve();
}