// legit code
#include <iostream>
#include <climits>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, k;
bool a[1000005];
int dL[1000005], dR[1000005];
int ans;
void build()
{
    for (int i = 1; i <= n; i++)
        if (a[i])
            dL[i] = dL[i - 1] + 1;
    for (int i = n; i > 0; i--)
        if (a[i])
            dR[i] = dR[i + 1] + 1;
}
void solve()
{
    build();
    for (int i = 0; i <= n; i++)
        ans = max(ans, dL[i] + min(k, n - i) + dR[i + min(k, n - i) + 1]);
    cout << ans;
}
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    solve();
}