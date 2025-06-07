// legit code
#include <iostream>
#include <climits>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, d;
ll a[100005], ans;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> d;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 2; i <= n; i++)
    {
        if (a[i - 1] >= a[i])
        {
            ll s = (a[i - 1] - a[i]) / d + 1;
            ans += s;
            a[i] = a[i] + s * d;
        }
    }
    cout<<ans;
}