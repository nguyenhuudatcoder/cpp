///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<climits>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,d,k;
#include<cmath>
ll ans=-inf,a[100005],t;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        a[i]+=a[i-1];
    }
    for(int i=1;i<=n;i++)
    {
        if(i>=k)
            ans=max(ans,a[i]-a[i-k]);
        a[i]=min(a[i],a[i-1]);
    }
    cout<<ans;
}