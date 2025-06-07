// legit code
#include <bits/stdc++.h>
#include <climits>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
ll d[10005];
int q, x;
void sub1dot9()
{
    for (int i = 2; i < 3e3; i++)
        for (int j = i + 1; j <= 3e3; j++)
            if (i * j / __gcd(i, j) - __gcd(i, j) <= 1e4)
                d[i * j / __gcd(i, j) - __gcd(i, j)]++;
}
main()
{
    cin.tie(0)->sync_with_stdio(0);
    sub1dot9();
    cin >> q;
    while (q--)
    {
        cin >> x;
        cout << (d[x])*2+2 << '\n';
    }
}