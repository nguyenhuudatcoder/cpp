///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n;
ll L,a[100005],b[100005];
ll ans=-inf;
void ChatGPT()
{
    ll l=0,r=1e18;
    while(l<=r)
    {
        ll m=(l+r)/2;
        ll litter=L;
        for(int i=0;i<n;i++)
        {
            if(m>=a[i])
            {
                ll need=(m-a[i])/b[i];
                
            }
        }
    }
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
    cin>>n>>L;
    for(int i=0;i<n;i++)  cin>>a[i]>>b[i];

}