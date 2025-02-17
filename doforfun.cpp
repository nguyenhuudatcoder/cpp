#include <bits/stdc++.h>
#define int long long
#define vip 1000005
#define mod 1000000007
using namespace std;
int n, b[vip], a[vip], ans;
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i];
    }
    sort(a + 1, a + n + 1);
    sort(b + 1, b + 1 + n);
    int i = 1, j = 1;
    while (i <= n && j <= n)
    {
        if (a[i] > b[j])
            j++;
        else if (a[i] == b[j])
        {
            i++;
            j++;
            ans++;
        }
        else
        {
            j++;
            i++;
            ans += 2;
        }
    }
    cout << ans;
}