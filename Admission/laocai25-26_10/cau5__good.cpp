///legit code
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int n,m;
ll a[100005],b[100005];
void get(ll x)
{
    ll s=0;
    for(int i=0;i<m;i++)
        if(s+x<b[i])
            break;
        else s+=b[i];
    cout<<s+x<<' ';

}
void solve()
{
    sort(b,b+m);
    for(int i=0;i<n;i++)
        get(a[i]);
}
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    solve();
}
