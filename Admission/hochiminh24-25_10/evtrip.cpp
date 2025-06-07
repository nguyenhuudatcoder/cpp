// legit code, quality over quantity
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int n, p, a[1005], d[1005], target, minn = 1e9;
void solve()
{
    for (int i = 1; i <= n; i++)
    {
        d[i] = 1e9;
        for (int j = i - 1; j >= 0; j--)
            if (a[i] - a[j] < p)
                d[i] = min(d[i], d[j] + 1);
            else
                break;
        if (d[i] == 1e9)
        {
            cout << -1;
            exit(0);
        }
    }
    for (int i = 0; i <= n; i++)
        if (target - a[i] < p)
            minn = min(minn, d[i]);
    if (minn == 1e9)
        cout << -1;
    else
        cout << minn;
}
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> p >> target;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a+1,a+n+1);
    solve();
}
