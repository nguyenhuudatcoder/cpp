///A game is our childhood
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int a,b,n;
int maxMoney;
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
    cin>>n>>a>>b;
    int s=0;
    for(int i=0;i<=n/a;i++)
    {
        int r=n-i*a;
        int s=r/b;
        maxMoney=max(maxMoney,i*a+s*b);
    }
    cout<<maxMoney;
}