///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n,a[1005];
int check(int n)
{
    int dem=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0) dem+=2;
        if(i*i==n) dem--;
    }
    return dem;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cout<<check(a[i])<<"\n";
    }
}
