///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<climits>
#include<algorithm>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n;
pair<int,int> a[1005];
ll s;
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
    {
        cin>>a[i].first>>a[i].second;
        a[i].second+=a[i].first;
    }
    sort(a,a+n);
    int x,y;
    x=a[0].first,y=a[0].second;
    for(int i=1;i<n;i++)
        if(a[i].first>y)
            s+=y-x,x=a[i].first,y=a[i].second;
        else y=a[i].second;
    s+=y-x;
    cout<<s;
} 