// legit code
#include <iostream>
#include <climits>
#include <algorithm>
#define ll long long
using namespace std;
const ll inf = 1e18;
const ll mod = 1e9 + 7;
int n;
int e[200005];
ll L[200005], R[200005];
ll minn, sum,ans=-inf;
void build()
{
    L[0]=R[n+1]=-inf;
    for (int i = 1; i <= n; i++)
        L[i] = -inf,
        sum += e[i],
        L[i] = max({L[i], sum - minn,L[i-1]}),
        minn = min(minn, sum);
    minn=sum=0;
    for(int i=n;i>0;i--)
        R[i]=-inf,
        sum+=e[i],
        R[i]=max({R[i],sum-minn,R[i+1]}),
        minn=min(minn,sum);
}
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;for(int i=1;i<=n;i++)cin>>e[i];
    build();
    for(int i=2;i<=n;i++)
        ans=max(ans,R[i]+L[i-1]);
    cout<<ans;
}