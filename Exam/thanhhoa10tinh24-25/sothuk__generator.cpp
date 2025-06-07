#include <bits/stdc++.h>
#define ll long long
using namespace std;
mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
bool d[1005];
main()
{
    cout << 1 << '\n';
    int n = 1 + rd() % 500, m = 1 + rd() % n, k = 1 + rd() % n;
    cout << n << ' ' << m << ' ' << k << '\n';
    for (int i = 0; i < m; i++)
    {
        int a = 1 + rd() % n;
        while (d[a] == 1)
            a = 1 + rd() % n;
        d[a] = 1;
        cout << a << ' ';
    }
}