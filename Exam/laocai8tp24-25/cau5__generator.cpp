#include<bits/stdc++.h>
#define ll long long
using namespace std;
mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
int n=50;
main()
{
    cout<<n<<'\n';
    for(int i=0;i<n;i++){
        int p=rd()%2;
        if(p==0)
            cout<<'-'<<(rd()%1000);
        else cout<<rd()%1000;
        cout<<' ';
    }
}