/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, a[100005], s, t;
ll ans;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> s;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for(int i=0;i<n;i++)
    {
        int j=i;
        int t=0;
        while(t+a[j]<=s&&j<n)
        {
            ans++;
            t+=a[j];
            j++;
        }
    }
    cout << ans;
}