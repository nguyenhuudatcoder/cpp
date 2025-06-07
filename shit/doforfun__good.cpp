// legit code, quality over quantity
#include <iostream>
#include <cmath>
#define ll long long
using namespace std;
int n, a[105], s, ans, minn = 1e9;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    for (int mask = 0, t = 0; mask < (1 << (n+1)/2); mask++, t = 0)
    {
        for (int i = 0; (1 << i) <= mask; i++)
            if (mask & (1 << i))
                t += a[i];
        if (abs(2 * t - s) < minn)
            ans = t, minn = abs(2 * t - s);
    }
    cout << min(ans, s-ans) << ' ' << max(ans, s-ans);
}