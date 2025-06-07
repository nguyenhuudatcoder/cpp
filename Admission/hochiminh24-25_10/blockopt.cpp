///legit code
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;
int n,D,a,b,s[55],S,maxx=0; // f là chi phí, s là khối lượng
vector<int> f[55];
void get(int mask)
{
    int t=0,v=0;
    for(int i=0; (1ll<<i)<=mask; i++)
    {
        if(mask&(1ll<<i))
        {
            v+=f[i][0];
            t+=s[i];
            for(int j=1; j<f[i].size(); j++)
                v+=f[f[i][j]][0],t+=s[f[i][j]];
        }
        if(t>S)return;
    }
    maxx=max(maxx,v);
}
void sub1()
{
    for(ll mask=0; mask<(1ll<<n); mask++)
        get(mask);
    cout<<maxx;
}
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>S;
    for(int i=0; i<n; i++)
    {
        cin>>a>>s[i];
        f[i].push_back(a);
    }
    cin>>D;
    while(D--)
    {
        cin>>a>>b;
        a--,b--;
        f[a].push_back(b);
    }
    sub1();
}
