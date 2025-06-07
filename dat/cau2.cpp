// legit code
#include <bits/stdc++.h>
#include <climits>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9+7;
string a;
int ans;
#include<unordered_map>
#include<algorithm>
unordered_map<char,int> d;
void solve()
{
    int l=0;
    for(int r=0;r<a.size();r++)
    {
        d[a[r]]++;
        while(d[a[r]]>1&&l<=r)
            d[a[l++]]--;
        ans=max(ans,r-l+1);
    }
    cout<<ans;
}
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin>>a;
    solve();
}