#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n;
bool ktnt(int n)
{
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return 0;
    return 1;
}
main()
{
    if(fopen("BAI2A.inp","r")){
        freopen("BAI2A.inp","r",stdin);
        freopen("BAI2A.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=sqrt(n); ;i++){
        if(ktnt(i)){
            cout<<i*i;
            return 0;
        }
    }
}