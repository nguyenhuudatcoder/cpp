// legit code
#include <iostream>
#include <climits>
#include <cmath>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9+7;
string a;
#include <vector>
#include <algorithm>
vector<int> b;
void solve(int d)
{
    for(int i=1,j=d;j+d<a.size();j+=d,i++)
    {
        if(i==d+1)
            i=1;
        if(a[i]!=a[j+i])
            return;
    }
    for(int i=1;i<=d;i++)
        cout<<a[i];
    exit(0);
}
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin>>a;
    int n=a.size();
    a=' '+a;
    for(int i=1;i<=sqrt(n);i++)
        if(n%i==0)
        {
            b.push_back(i);
            if(i*i!=n)
                b.push_back(n/i);
        }
    sort(b.begin(),b.end());
    for(auto d:b)
        solve(d);
}