///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int l,r;
int a[10000005];
void ChatGPT()
{
    for(int i=1;i<=r/2;i++)
        for(int j=i*2;j<=r;j+=i)
            a[j]+=i;
    for(int i=1;i<=r;i++)
        a[i]=a[i-1]+bool(a[i]>i);
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
    cin>>l>>r;
    ChatGPT();
    cout<<a[r]-a[l-1];
}