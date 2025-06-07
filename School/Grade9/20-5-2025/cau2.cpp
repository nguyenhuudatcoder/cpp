// legit code, quality over quantity
#include <iostream>
#include <vector>
#include <cmath>
#define ll long long
using namespace std;
ll l, r;
int c;
vector<ll> p;
bool snt[1000005];
void make_sieve()
{
    snt[0] = snt[1] = 1;
    for (int i = 2; i <= 1e3; i++)
        if (snt[i] == 0)
            for (int j = i * i; j <= 1e6; j += i)
                snt[j] = 1;
}
void solve()
{
    for (ll i = 2; i <= sqrt(r); i++)
        if (snt[i] == 0)
        {
            ll s = i;
            int d = 1;
            while (s*i<=r)
            {
                d++, s *= i;
                if (snt[d + 1] == 0 && s >= l && s <= r)
                    c++;
            }
        }
    cout<<c;
}
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin >> l >> r;
    make_sieve();solve();
}