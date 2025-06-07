///legit code
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
string a;
int f[2005][2005],n;
void build()
{
    n=a.size();
    a=' '+a;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            f[i][j]=1e9;
    for(int i=1; i<=n; i++)
        f[i+1][i-1]=f[i+1][i]=0;
}
void solve()
{
    for(int j=1; j<=n; j++)
        for(int i=j; i>0; i--)
            if(a[i]==a[j])
                f[i][j]=min(f[i][j],f[i+1][j-1]);
            else
                f[i][j]=min({f[i][j],f[i+1][j]+1,f[i][j-1]+1,f[i+1][j-1]+2});
    cout<<f[1][n];
}
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin>>a;
    build();
    solve();
}
