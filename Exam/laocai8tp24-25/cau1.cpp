// legit code
#include <iostream>
#include <climits>
#include<iomanip>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9+7;
double n;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    cout<<fixed<<setprecision(4)<<1.0*n/(n+1);
}