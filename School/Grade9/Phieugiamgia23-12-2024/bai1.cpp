/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
int y, x;
int ans = 10000, a, b;
void ChatGPT(int i, int j)
{
    a = i * 10 + (x - i);
    b = j * 10 + (y - j);
    int m = a * 100 + b;
    if (m >= 1000&&m<10000)
        ans = min(ans, m);
    m = b * 100 + a;
    if (m >= 1000&&m<10000)
        ans = min(ans, m);
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    y = n % 100;
    n /= 100;
    x = n;
    if (x > 18 || y > 18)
    {
        cout << 0;
        exit(0);
    }
    for (int i = 0; i <= 9; i++)
    {
        if (x-i < 10)
            for (int j = 0; j <= 9; j++)
            {
                if (y-j < 10)
                {
                    ChatGPT(i, j);
                }
            }
    }
    if (ans == 10000)
        cout << 0;
    else
        cout << ans;
}