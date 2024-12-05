///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,a[1000005];
map<int,int> Count;
int ans;
void getFlowers()
{
    int l=0,r=0;
    while(r<n)
    {
        Count[a[r]]++;
        if(Count[a[r]]>2)
            {ans=max(ans,r-l);
            while(Count[a[r]]>2)
            {
                Count[a[l]]--;
                l++;
            }}
        r++;
    }
    ans=max(ans,r-l);
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
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    getFlowers();
    cout<<ans;
}