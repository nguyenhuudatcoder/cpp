// legit code
#include <iostream>
#include <climits>
#include <algorithm>
#include <string>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
string a, b;
bool check(string a, string b)
{
    while (a.size() < b.size())
        a = '0' + a;
    while (a.size() > b.size())
        b = '0' + b;
    return a < b;
}
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    while (a.front() == '0')
        a.erase(0, 1);
    while (b.front() == '0')
        b.erase(0, 1);
    if (check(a, b))
        cout << b;
    else
        cout << a;
}