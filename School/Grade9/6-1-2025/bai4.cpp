/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
ll k, a[100005];
int ans = -1;
bool check(int dis)
{
    for (int i = dis - 1; i < n; i++)
        if (a[i] - a[i - dis] > k)
            return 1;
    return 0;
}
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
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] = a[i - 1] + a[i];
    }
    for (int dis = 1; dis <= n; dis++)
        if (check(dis)==1)
        {
            cout << ans;
            exit(0);
        }
        else
            ans = dis;
    cout << ans;
}