///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int a,b,ans;
int dao(int n)
{
    int s=0;
    while(n>0)
    {
        s=s*10+n%10;
        n/=10;
    }
    return s;
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
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(__gcd(i,dao(i))==1)
            ans++;
    }
    cout<<ans;
}