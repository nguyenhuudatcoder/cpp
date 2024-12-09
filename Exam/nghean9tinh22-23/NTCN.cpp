///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
#define mod 1000000007
using namespace std;
long long n;
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
    long long ans=n;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
        {
            ans-=ans/i;
            while(n%i==0)
                n/=i;
        }
    if(n>1) ans-=ans/n;
    cout<<ans;
}