#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,k,p;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k>>p;
    cout<<n%(k+1)*p+(n/k+1)*(k*p);
}