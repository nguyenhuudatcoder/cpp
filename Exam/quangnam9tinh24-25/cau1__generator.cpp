#include<bits/stdc++.h>
#define ll long long
using namespace std;
mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());

main()
{
    int a=rd()%700;
    cout<<1+rd()%1000<<' '<<a<<' '<<a+rd()%700;
}