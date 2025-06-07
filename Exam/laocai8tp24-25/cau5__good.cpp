/// Made by Nguyễn Hữu Đạt
#include <iostream>
#include <climits>
#include <cmath>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
ll n, e[10005];
ll ans = -inf;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> e[i];
    ll l = 0, r = 0, L = 0, R = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (i == 0)
            l = L = e[i];
        else
            l = max(l + e[i], e[i]),
            L = max(L, l);

        for (int j = i + 1; j < n; j++)
        {
            if (j == i + 1)
                r = R = e[j];
            else
                r = max(r + e[j], e[j]),
                R = max(r, R);
            ans = max(ans, L + R);
        }
    }
    cout<<ans;
}