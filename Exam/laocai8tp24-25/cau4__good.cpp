// legit code
#include <iostream>
#include <climits>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9+7;
int n,m,a[1000005];
ll d;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>m;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(a[i]+a[j]<=m) d++;
    cout<<d;
}