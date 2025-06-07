#include<bits/stdc++.h>
#define ll long long
using namespace std;
mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
int n=1+rd()%20;
main()
{ 
    cout<<n<<'\n';
    while(n--)cout<<1+rd()%100<<" ";
}