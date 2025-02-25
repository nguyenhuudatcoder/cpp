///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,d;
struct company{
    int req,val;
};
bool cmp(company a, company b)
{
    if(a.req==b.req)return a.val<b.val;
    return a.req<b.req;
}
company a[200005];
ll s[200005],t;
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
    for(int i=1;i<=n;i++)
        cin>>a[i].req>>a[i].val;
    sort(a+1,a+n+1,cmp);
    for(int i=1;i<=n;i++)
        s[i]=s[i-1]+a[i].val;
    int l=1,r=n;
    while(l<=r){
        if(a[r].req>r-1||a[r].val<=s[r-1]-s[l-1]){
            t+=a[r].val;
            d++;
            r--;
        }
        else{t+=a[l].val,l++,d++;}
        while(a[l].req<=d&&l<=r)l++;
    }
    cout<<t;
}