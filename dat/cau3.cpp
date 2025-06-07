// legit code
#include <bits/stdc++.h>
#include <climits>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
bool snt[100005];
ll n;
vector<ll> p;
bool save = 1;
void make_sieve()
{
    snt[0] = snt[1] = 1;
    for (int i = 2; i <= sqrt(1e5); i++)
        if (snt[i] == 0)
        {
            for (int j = i * i; j <= 1e5; j += i)
                snt[j] = 1;
        }
    for (int i = 2; i <= sqrt(1e9); i++)
        if (snt[i] == 0)
            p.push_back(1ll * i);
}
bool ktnt(ll n)
{
    if (n < 2)
        return 0;
    for (auto i : p)
    {
        if (i > sqrt(n))
            return 1;
        if (n % i == 0)
            return 0;
    }
    return 1;
}
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;
    make_sieve();
    for (int j = 1; j < p.size() && 4 + p[j] * p[j] <= n; j++)
        if (ktnt(4 + p[j] * p[j]))
        {
            cout << 2 << ' ' << p[j] << ' ' << 4 + p[j] * p[j] << '\n';
            save = 0;
        }
    if (save)
        cout << -1;
    // cout<<p.size();
}