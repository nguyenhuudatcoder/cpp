#include <bits/stdc++.h>
using namespace std;
mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
int n=rd()%1000+1,m=rd()%1000+1;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cout<<n<<' '<<m<<'\n';
    for(int i=0;i<n;i++)
        cout<<1+rd()%1000000000<<' ';
    for(int i=0;i<m;i++)
        cout<<1+rd()%1000000000<<' ';
}
