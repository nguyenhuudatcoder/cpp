#include <bits/stdc++.h>
using namespace std;
int n, k;
long long a[100005], m, ans;
map<int, int> dem;
int modul(long long x)
{
    long long M = m;
    long long t = 1;
    while (M > 0)
    {
        if (M % 2 == 1)
            t = t * x% k;
        x = x * x % k;
        M /= 2;
    }
    return t;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        a[i] = modul(a[i]);
    }
    // for (int i = 0; i < n; i++)
    //     cout << a[i] << " ";
    dem[0]++;
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += a[i];
        s %= k;
        ans += dem[s];
        dem[s]++;
    }
    cout << ans;
}