// legit code
#include <iostream>
#include <climits>
#include <algorithm>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
ll n, m;
ll a[100005], k[100005];
ll s[100005];
void solve(int k)
{
    ll ans = 0;
    ll p = upper_bound(a + 1, a + n + 1, k) - a;
    p--;
    ans += 1ll * k * p - s[p];
    ans += s[n] - s[p] - k * (n - p);
    cout << ans << ' ';
}
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= m; i++)
        cin >> k[i];
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++)
        s[i] = s[i - 1] + a[i];
    for (int i = 1; i <= m; i++)
        solve(k[i]);
}