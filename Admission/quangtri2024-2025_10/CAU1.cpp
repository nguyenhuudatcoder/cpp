///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
long long n,m,k;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m>>k;
    if(n%k!=0)
        n+=k-(n%k);
    if(m%k!=0)
        m+=k-(n%k);
    k*=k;
    cout<<m*n/k;
}