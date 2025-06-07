#include<iostream>
#include<vector>
using namespace std;
#define ll long long
ll n,a[100005];
vector<ll> prime={2,3,5,7};
ll luythua(ll a,ll b,ll c){
    ll res=1;
    while(b>0)
    {
        if(b&1) res=res*a%c;
        a=a*a%c;
        b/=2;
    }
    return res;
}
bool test(ll a,ll m,int k,ll n)
{
    ll res=luythua(a,m,n);
    if(res==1||res==n-1)
        return 1;
    for(int i=1;i<k;i++)
    {
        res=res*res%n;
        if(res==1)
            return 0;
        if(res==n-1)
            return 1;
    }
    return 0;
}
bool MillerRabin(ll n)
{
    for(auto i:prime) if(n==i) return 1;
    if(n<11) return 0;
    ll m=n-1;
    int k=0;
    while(m%2==0)
        k++,m/=2;
    for(auto a:prime)
        if(!test(a,m,k,n))
            return 0;
    return 1;
}

main()
{
    cin.tie(0)->sync_with_stdio(0);
    while(cin>>a[++n]);
    for(int i=n-1;i>1;i--)
        if(MillerRabin(a[i+1])&&MillerRabin(a[i-1]))
        {
            cout<<i;
            exit(0);
        }
    cout<<0;
}