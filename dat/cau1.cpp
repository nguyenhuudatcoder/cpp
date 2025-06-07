// legit code
#include <bits/stdc++.h>
#include <climits>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9+7;
ll n;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    ll m=n/2;
    ll s1=n*m;
    ll s2=m*(m*2+2)/2;
    cout<<s1-s2;
}