///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<climits>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,a[1000005];
void ChatGPT(int k)
{
    int l=1,r=k;
    while(l<=r)
    {
        int m=l+(r-l)/2;
        if(a[m]>=k-m+1)
            r=m-1;
        else l=m+1;
    }
    cout<<k-r<<' ';
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        ChatGPT(i);
}