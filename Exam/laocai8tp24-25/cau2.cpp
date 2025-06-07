// legit code
#include <iostream>
#include <climits>
#include<vector>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9+7;
string s;
vector<string> a;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    while(cin>>s)a.push_back(s);
    cout<<a.size()<<'\n';
    for(auto i:a)cout<<i<<'\n';
}