// legit code
#include <iostream>
#include <climits>
#include <algorithm>
#include <cmath>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int m, n, k;
int x[100005], y[100005], s[505];
int check(int a, int x)
{
    int l=0,r=n-1,res=n-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(x+y[mid]>=a)
            r=mid-1,res=mid;
        else l=mid+1;
    }
    return res;
}
void binarysearch(int a)
{
    int ans=2e9+1;
    for(int i=0;i<m;i++)
    {
        int p=check(a,x[i]);
        ans=min(ans,abs(y[p]+x[i]-a));
        if(p>1) ans=min(ans,abs(y[p-1]+x[i]-a));
    }
    cout<<ans<<' ';
}
void solve(int a)
{
    int ans = 2e9+1;
    int i = 0, j = n - 1;
    while (i <= j && i < m && j >= 0)
    {
        ans = min(ans, abs(x[i] + y[j] - a));
        if (1ll * x[i] + y[j] >= a)
            j--;
        else
            i++;
    }
    cout<<ans<<' ';
}
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin >> m >> n >> k;
    for (int i = 0; i < m; i++)
        cin >> x[i];
    for (int i = 0; i < n; i++)
        cin >> y[i];
    for (int i = 0; i < k; i++)
        cin >> s[i];
    sort(x, x + m);
    sort(y, y + n);
    for (int i = 0; i < k; i++)
        solve(s[i]);
}