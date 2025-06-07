// legit code
#include <bits/stdc++.h>
#include <climits>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9+7;
int n,da,db,ans;
ll c,d;
string a;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>c;
    cin>>a;
    int l=0;
    for(int r=0;r<a.size();r++)
    {
        if(a[r]=='a')
            da++;
        else if(a[r]=='b')
            d+=da,db++;
        while(d>c&&l<=r)
        {
            if(a[l]=='a')
                d-=db,da--;
            else if(a[l]=='b')
                db--;
            l++;
        }
        ans=max(ans,r-l+1);
    }
    cout<<ans;
}