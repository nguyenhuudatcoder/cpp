#include<bits/stdc++.h>
#define ll long long
using namespace std;
mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
int n=1+rd()%20;
main()
{
    cout<<n<<' '<<rd()%100<<'\n';
    for(int i=0;i<n;i++)
        cout<<1+rd()%100<<' ';
    cout<<'\n';
    for(int i=0;i<n;i++)
        cout<<1+rd()%10<<' ';
}