/// Made by Nguyễn Hữu Đạt
#include <iostream>
#include <climits>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
int x;
int d[60005];
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> x;
            d[x + 3000]++;
        }
    int m = 0;
    for (int i = 0; i <= 6000; i++)
        while (d[i]>0)
        {
            if (m == n)
            {
                m = 0;
                cout << '\n';
            }
            cout << i - 3000 << ' ';
            m++;
            d[i]--;
        }
}