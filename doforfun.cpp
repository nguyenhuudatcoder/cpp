/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, x, d[10], ans;
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
    while (n--)
    {
        cin >> x;
        d[x]++;
    }
    ans += d[4];
    int t = min(d[1], d[3]);
    ans += t;
    d[1] -= t;
    d[3] -= t;
    ans+=d[3];
    ans += d[2] / 2;
    d[2] %= 1;
    if (d[2] > 0)
    {
        ans ++;
        d[1] -= 2;
    }
    
    ans += (d[1] + 3) / 4;
    cout << ans;
}