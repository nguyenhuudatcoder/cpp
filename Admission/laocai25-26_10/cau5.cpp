///legit code
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int n,m;
ll a[100005],b[100005],req[100005];
void build()
{
    sort(b,b+m);
    b[-1]=0,req[-1]=-1e16;
    for(int i=0; i<m; i++)
        req[i]=max(req[i-1],b[i]-b[i-1]),b[i]+=b[i-1];
}
void solve()
{
    for(int i=0; i<n; i++)
        cout<<a[i]+b[(upper_bound(req,req+m,a[i])-req)-1]<<' ';
}
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>m;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<m; i++)
        cin>>b[i];
    build();
    solve();
}
