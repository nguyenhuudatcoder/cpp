///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int t,l,r;
bool snt[1000005];
int dem[1000005];
void make_sieve()
{
    snt[0]=snt[1]=1;
    for(int i=2; i<=sqrt(1e6); i++)
        if(snt[i]==0)
            for(int j=i*i; j<=1e6; j+=i)
                snt[j]=1;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    make_sieve();
    for(int i=2;i<=1e6;i++)
    {
        dem[i]=dem[i-1];
        if(snt[i]==0)
            dem[i]++;
    }
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        cout<<dem[r]-dem[l-1]<<"\n";
    }
}
