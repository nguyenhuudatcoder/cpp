///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<climits>
#include<array>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,m,a[50],p;
bool t[50];
bool Sum()
{
    ll s=0;
    for(int i=0;i<n;i++)
        s+=t[i]*a[i];
    return s==m;
}
void op()
{
    for(int i=0;i<n;i++)
        cout<<t[i];
    cout<<"\n";
}
void backtrack(int d)
{
    // if(p==n+1) return;
    if(Sum())
    {
        for(int i=0;i<n;i++)
            cout<<t[i];
        exit(0);
    }
    for(int i=p;i<n;i++)
    {
        p=i;
        if(t[i]==0)
        {
            t[i]=1;
            backtrack(d+1);
            t[i]=0;
        }
        // op();
    }
}   
void bitmask()
{
    for(int mask=0;;mask++)
    {
        
    }
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
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>m;
    backtrack(0);
}