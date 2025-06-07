// legit code, quality over quantity
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int n, h[100005], flower;
ll b[100005];
ll s;
void reset(int p)
{
    for (int i = p + 1; i < flower; i++)
        b[i] = max(b[i],b[p]);
}
void solve()
{
    b[-1] =h[-1]= 0;
    for (int i = 0; i < n; i++)
    {
        if (flower == 0)
            h[flower] = h[i], b[flower] = b[flower - 1] + b[i], flower++, s = max(s, b[flower - 1]);
        else
        {
            int p = lower_bound(h, h + flower, h[i]) - h;
            if (b[p] <= b[i] + b[p - 1])
                h[p] = h[i], b[p] = b[p - 1] + b[i], s = max(s, b[p]), reset(p);
        }
    }
    cout << s;
}
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> h[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    solve();
}
