///Made by Nguyễn Hữu Đạt

#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int x,y;
ll tong(int l,int r)
{
    int ssh=(r-l+1);
    return (r+l)*ssh/2;
}
void ChatGPT()
{
    int l=x,r=y;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(tong(l,m)>=tong(m+1,r))
            r=m-1;
        else l=m+1;
    }
    cout<<r+1;
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
    cin>>x>>y;
    ChatGPT();
}