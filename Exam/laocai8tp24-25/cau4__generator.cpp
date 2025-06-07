#include<bits/stdc++.h>
#define ll long long
using namespace std;
mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
main()
{
    int n=rd()%500+2;
    cout<<n<<' '<<rd()%1000<<'\n';
    for(int i=0;i<n;i++)cout<<rd()%200<<' ';
    
}