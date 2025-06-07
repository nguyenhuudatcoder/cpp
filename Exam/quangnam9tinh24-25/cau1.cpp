///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<climits>
#include<algorithm>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,a,b;
ll ans;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>a>>b;
    for(int x=1;x<n;x++)
    {
        int y1=(a-x);
        if(y1<=x) y1=x+1;
        int y2=min(n,b-x);
        ans+=max(0,y2-y1+1);
    }
    cout<<ans;
}