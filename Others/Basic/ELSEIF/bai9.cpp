#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,m;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    cout<<min(n,m)<<" "<<(max(n,m)-min(n,m))/2;
}