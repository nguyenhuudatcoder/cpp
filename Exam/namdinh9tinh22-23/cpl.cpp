/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
ll n;
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
    for (ll i = 1; i <= sqrt(n); i += 2)
        ans += i * i;
    n = sqrt(n);
    n = n - (n + 1) % 2;
    n--;
    cout << n / 2 + 1 << "\n"
         << ans;
}