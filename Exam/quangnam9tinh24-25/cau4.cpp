/// Made by Nguyễn Hữu Đạt
#include <iostream>
#include <climits>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
ll a[1005][1005];
pair<ll, ll> s[1005][1005];
int m, x, y;
int getLine(int i, int j)
{
    s[i][j].first = s[i][j - 1].first + a[i][j];
    if (j == n)
        return s[i][j].first;
    s[i][j].first = getLine(i, j + 1);
}
int getCol(int i, int j)
{
    s[i][j].second = s[i - 1][j].second + a[i][j];
    if (i == n)
        return s[i][j].second;
    s[i][j].second = getCol(i + 1, j);
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[1][i];
        a[i][1] = a[1][i];
    }
    for (int i = 2; i <= n; i++)
        for (int j = 2; j <= n; j++)
            a[i][j] = a[1][j] * a[i][1];
    for (int i = 1; i <= n; i++)
        getLine(i, 1);
    for(int i=1;i<=n;i++)
        getCol(1,i);
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //         cout << s[i][j].second << ' ';
    //     cout << '\n';
    // }
    cin>>m;
    while(m--)
    {
        cin>>x>>y;
        cout<<s[x][y].first+s[x][y].second-2*a[x][y]<<'\n';
    }
}