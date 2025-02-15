/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define int long long
#define kien main
using namespace std;
int n, m, q, k;
int dem[10000005];
kien()
{
    // if(fopen("dayden.inp","r"))
    // {
    // 	freopen("dayden.inp","r",stdin);
    // 	freopen("dayden.out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m >> q >> k;
    for (int x, i = 1; i <= m; i++)
    {
        cin >> x;
        dem[max(1ll, x - k)]=dem[max(1ll,x-k)]+1;
        dem[ x + k + 1]--;
    }
    for (int i = 1; i <= n; i++)
        dem[i] = dem[i - 1] + dem[i];
    for(int i=1;i<=q;i++)
    {
        cin >> m;
        if (dem[m] % 2 == 1)
            cout << "D\n";
        else
            cout << "V\n";
    }
}