// legit code
#include <iostream>
#include <climits>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9+7;
int q,l,r;
bool snt[1000005];
int d[1000005];
int dx(int n)
{
    int s=0;while(n)s=s*10+n%10,n/=10;
    return s;
}
void make_sieve()
{
    snt[0]=snt[1]=1;
    for(int i=2;i<=1e3;i++)
        if(snt[i]==0)
            for(int j=i*i;j<=1e6;j+=i)
                snt[j]=1;
    d[-1]=0;
    for(int i=2;i<=1e6;i++)
        d[i]=d[i-1]+(snt[i]==0&&dx(i)==i);
}
main()
{
    cin.tie(0)->sync_with_stdio(0);
    make_sieve();
    cin>>q;while(q--){cin>>l>>r;cout<<d[r]-d[l-1]<<'\n';}
}