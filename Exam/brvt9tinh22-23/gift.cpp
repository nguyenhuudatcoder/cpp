///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<climits>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,a[10005],ans,k;
int d[10005];
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=1;i<n;i++)
        for(int j=0;j<i;j++)
            if(a[i]-a[j]>=k)
                d[i]=max(d[i],d[j]+1),ans=max(ans,d[i]);
    cout<<ans+1;
}