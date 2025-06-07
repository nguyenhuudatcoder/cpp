// legit code
#include <bits/stdc++.h>
#include <climits>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9+7;
int n;
ll c,s;
string a;
int ans,d;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>c;
    cin>>a;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(a[j]=='a')
                d++;
            else if(a[j]=='b')
                s+=d;
            if(s>c)
                break;
            ans=max(ans,j-i+1);
        }
        s=d=0;
    }
    cout<<ans;
}