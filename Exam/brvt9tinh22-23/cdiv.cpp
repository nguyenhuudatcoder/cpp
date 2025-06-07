/// Made by Nguyễn Hữu Đạt
#include <iostream>
#include <climits>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, x;
int uoc[1000005];
int d[1000005], ans = 1;
void make_div()
{
    for (int i = 2; i <= 1e6; i++)
        for (int j = i, c = 0; j <= 1e6; j += i)
        {
            c += d[j];
            if (c > 1)
            {
                ans = i;
                break;
            }
        }
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
    while (n--)
    {
        cin >> x;
        d[x]++;
    }
    make_div();
    cout << ans;
}