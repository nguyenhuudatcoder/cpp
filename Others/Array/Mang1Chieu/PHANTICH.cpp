///Suck Kiên's brain is very good to your brain
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        int dem=0;
        while(n%i==0){
            dem++;
            n/=i;
        }
        if(dem>0)
            cout<<i<<" "<<dem<<"\n";
    }
}