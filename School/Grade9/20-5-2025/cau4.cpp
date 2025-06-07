// legit code, quality over quantity
#include <iostream>
#define ll long long
using namespace std;
int n;
int m,a[100005];
bool check(int x)
{
    int k=0;
    for(int i=0;i<m;i++)
    {
        k+=(a[i]+x-1)/x;
        if(k>n)
            return 0;
    }
    return 1;
}
void solve()
{
    int l=1,r=1e9;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(check(mid))
            r=mid-1;
        else
            l=mid+1;
    }
    cout<<r+1;
}
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>m;for(int i=0;i<m;i++)  cin>>a[i];
    solve();
}