///legit code
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int n;
ll m,s;
pair<ll,ll>a[100005];
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>m;
    for(int i=0; i<n; i++)
        cin>>a[i].first>>a[i].second;
    sort(a,a+n,[](pair<ll,ll>a,pair<ll,ll>b)
    {
        return a.second<b.second;
    });
    for(int i=0;i<n;i++){
        s+=min(m,a[i].first)*a[i].second,m-=min(m,a[i].first);
        if(m==0)
            break;
    }
    cout<<s;
}
