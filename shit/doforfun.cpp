#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    for(ll x, i = 1; i <= n; ++i)
    {
        cin >> x;
        if(x % 2 != 0)
        {
            ll c = 1, d = x;
            ll a = (c + d) / 2, b = (d - c) / 2;
            cout << max(a, b) << ' ' << min(a, b) << '\n';
        }
        else if(x % 4 == 0)
        {
            ll c = 2, d = x / 2;
            ll a = (c + d) / 2, b = (d - c) / 2;
            cout << max(a, b) << ' ' << min(a, b) << '\n';
        }
        else
            cout << "impossible\n";
    }
}
