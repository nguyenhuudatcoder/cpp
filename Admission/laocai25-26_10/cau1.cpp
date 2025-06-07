///legit code
#include <iostream>
#define ll long long
using namespace std;
int q;
ll n;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin>>q;
    while(q--)
    {
        cin>>n;
        cout<<n/3+n/5-n/15<<'\n';
    }
}
