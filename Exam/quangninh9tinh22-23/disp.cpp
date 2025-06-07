// legit code
#include <iostream>
#include <climits>
#include <cmath>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9+7;
int n;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(int i=sqrt(n);i>0;i--)
        if(n%i==0)
        {
            cout<<i<<' '<<n/i;
            break;
        }
}