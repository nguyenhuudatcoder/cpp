///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<climits>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int t;
int n,m,k,d[100005],a;
void solve()
{
    for(int i=1;i<=n;i++)
    {
        if(d[i]==0){
            k--;
            if(k==0){
                cout<<i<<'\n';
                return;}
        }
    }
    cout<<"-1\n";
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        for(int i=0;i<m;i++){
            cin>>a;
            d[a]++;}
        solve();
    }
}