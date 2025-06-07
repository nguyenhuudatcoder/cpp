// legit code, quality over quantity
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int n,maxx,d;
string a;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a=="ONLINE") d++;
        else maxx=max(d,maxx),d=0;
    }
    maxx=max(maxx,d);
    cout<<maxx;
}
