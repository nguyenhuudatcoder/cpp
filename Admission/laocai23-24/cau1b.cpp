// legit code
#include <iostream>
#include <climits>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9+7;
int q;
ll n;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin>>q;
    while(q--)
    {
        cin>>n;
        cout<<n/3+n/7-n/21<<'\n';
    }
}