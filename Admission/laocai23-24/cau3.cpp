// legit code
#include <iostream>
#include <climits>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9+7;
int n,x;
bool snt[1000005];
void build()
{
    snt[0]=snt[1]=1;
    for(int i=2;i<=1e3;i++)
        if(snt[i]==0)
            for(int j=i*i;j<=1e6;j+=i)
                snt[j]=1;
}
int tcs(int n)
{
    int s=0;
    while(n)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    build();
    int d=0;
    while(n--)
    {
        cin>>x;
        if(snt[x]==0&&snt[tcs(x)]==0)
            d++;
    }
    cout<<d;
}