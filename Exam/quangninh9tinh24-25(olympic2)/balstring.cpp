///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<climits>
#include<map>
#include<unordered_map>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
string s;
int a[1000005];
ll ans;
unordered_map<int,int>d;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin>>s;
    for(int i=0;i<s.size();i++)
        if(s[i]=='0')
            a[i]=-1;
        else a[i]=1;
    a[-1]=0;
    d[0]++;
    for(int i=0;i<s.size();i++)
    {
        a[i]+=a[i-1];
        ans+=d[a[i]];
        d[a[i]]++;
    }
    cout<<ans;
}