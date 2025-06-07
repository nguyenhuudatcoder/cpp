/// Made by Nguyễn Hữu Đạt
#include <iostream>
#include<algorithm>
#include <climits>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, m;
int ans;
int a[1000005];
int b[1000005], maxx;
void getL()
{
    for (int i = 1; i < m; i++)
        if (a[i] >= b[maxx])
            b[++maxx]=a[i];
        else
        {
            int p=upper_bound(b+1,b+maxx+1,a[i])-b;
            b[p]=a[i];
        }
    if(a[m]>=b[maxx])
        ans=maxx+1;
    else ans=upper_bound(b+1,b+maxx+1,a[m])-b;
}
void getR()
{
    maxx=0;
    for(int i=m+1;i<=n;i++)
        if(a[i]>=b[maxx])
            b[++maxx]=a[i];
        else
            b[upper_bound(b+1,b+maxx+1,a[i])-b]=a[i];
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    getL();
    getR();
    cout<<ans+maxx;
}