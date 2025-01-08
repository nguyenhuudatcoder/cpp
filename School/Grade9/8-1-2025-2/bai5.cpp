/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int t, n;
struct shit
{
    int park, leave;
};
shit a[10005];
bool compare(shit a, shit b)
{
    if (a.park == b.park)
        return a.leave < b.leave;
    return a.park < b.park;
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
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].park;
            // a[i].park = a[i].park % 100 * 60 + a[i].park % 100;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].leave;
            // a[i].leave = a[i].leave % 100 * 60 + a[i].leave % 100;
        }
    }
}