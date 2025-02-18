#include <bits/stdc++.h>
using namespace std;
int n, x, ans, d;
bool ck(int n)
{
    while (n > 0)
    {
        if ((n % 10) % 2 == 0)
            return 0;
        n /= 10;
    }
    return 1;
}
main()
{
    cin >> n;
    while (n--)
    {
        cin >> x;
        if (ck(x) == 0)
        {
            ans = max(ans, d);
            d = 0;
        }
        else
            d++;
    }
    cout << max(ans, d);
}