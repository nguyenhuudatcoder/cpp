///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n;
ll t;
int getMax(ll n)
{
    int ans=0;
    while(n>0)
    {
        ans=max(ans,(int)n%10);
        n/=10;
    }
    return ans;
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
    cin>>n;
    for(int i=1;i<=n;i++)
        t+=1ll*i*(i+1)*(i+2);
    int ans=getMax(t);
    cout<<t<<"\n"<<ans;
}