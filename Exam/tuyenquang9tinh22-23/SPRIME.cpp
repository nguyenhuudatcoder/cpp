#include <bits/stdc++.h>
#define int long long
using namespace std;

bool ktnt(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int n, ans;
main()
{
    if(fopen("SPRIME.inp","r")){
        freopen("SPRIME.inp","r",stdin);
        freopen("SPRIME.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n/2; i++)
        if (ktnt(i) && ktnt(n - i))
            ans++;
    cout << ans;
}