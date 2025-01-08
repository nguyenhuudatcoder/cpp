/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
ll n, x;
ll ans;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    ll res = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        if (x % 2 == 0)
            res++;
        else
        {
            ans = max(ans, res);
            res = 0;
        }
    }
    ans = max(ans, res);
    cout << ans;
}