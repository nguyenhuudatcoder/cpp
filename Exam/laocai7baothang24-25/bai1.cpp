///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<climits>
#include<cmath>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
ll a,b;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin>>a>>b;
    ll m=sqrt(a);
    if(m*m<a) m++;
    b=sqrt(b);
    cout<<b-m+1;
}