///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<climits>
#define ll long long
#include<cmath>
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,k;int h[100005];ll a[100005];
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>h[i];
    for(int i=2;i<=n;i++)
    {
        a[i]=inf;
        for(int j=i-1;j>=max(1,i-k);j--)
            a[i]=min(a[i],a[j]+abs(h[i]-h[j]));
    }
    cout<<a[n];
}