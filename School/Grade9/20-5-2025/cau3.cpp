// legit code, quality over quantity
#include <iostream>
#include <cmath>
#define ll long long
using namespace std;
int q,l,r,a[10000005];
void build()
{
    for(int &i:a) i=1;
    a[0]=a[1]=0;
    for(int i=2;i<=sqrt(1e7);i++)
        if(a[i])
            for(int j=i*i;j<=1e7;j+=i)
                a[i]=0;
    for(int i=2;i<=1e7;i++)
        a[i]+=a[i-1];
}
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin>>q;
    build();
    while(q--){cin>>l>>r;}
}