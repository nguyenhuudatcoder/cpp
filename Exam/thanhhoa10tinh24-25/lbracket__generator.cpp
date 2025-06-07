#include<bits/stdc++.h>
#define ll long long
using namespace std;
mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
string a="()";
main()
{
    for(int i=0;i<20;i++)
        cout<<a[rd()%2];
}