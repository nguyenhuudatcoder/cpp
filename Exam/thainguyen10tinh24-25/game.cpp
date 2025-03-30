///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<ios>
#include<cmath>
#include<array>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,a[1000005],d;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    // cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        int x=sqrt(a[i]);
        if(x*x==a[i])
            d++;
    }
    cout<<d<<'\n';
    for(int i=0;i<n;i++)
    {
        int x=sqrt(a[i]);
        if(x*x==a[i])
            cout<<"YES ";
        else cout<<"NO ";
    }
}