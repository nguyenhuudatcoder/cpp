#include<bits/stdc++.h>
#define ll long long
using namespace std;
mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());

main()
{
    cout<<20<<' '<<rd()%50<<'\n';
    string a="abc";
    for(int i=0;i<20;i++)
        cout<<a[rd()%a.size()];
}