#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int t, n, m, a[100005], k;
void solve()
{
    int l = 1, r = n;
    int ans = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        int p = upper_bound(a, a + m, mid) - a;
        if (mid - p >= k)
        {
            if(mid-p==k)
                ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans << '\n';
}
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin >> t;
    a[-1] = 0;
    while (t--)
    {
        cin >> n >> m >> k;
        for (int i = 0; i < m; i++)
            cin >> a[i];
        sort(a, a + m);
        solve();
    }
}