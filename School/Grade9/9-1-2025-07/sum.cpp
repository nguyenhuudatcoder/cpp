///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,k;
int a[10005];ll s;
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
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>a[i];sort(a,a+n);
    for(int i=k;i<n;i++)s+=a[i];cout<<s<<" ";s=0;
    for(int i=0;i<n-k;i++)s+=a[i];cout<<s;
}