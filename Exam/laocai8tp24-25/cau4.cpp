// legit code
#include <iostream>
#include <climits>
#include<algorithm>
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
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int l=0,r=n-1;l<r;l++)
    {
        while(a[l]+a[r]>m&&l<r)r--;
        d+=r-l;
    }
    cout<<d;
}