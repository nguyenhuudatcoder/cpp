/// Made by Nguyễn Hữu Đạt
#include <iostream>
#include <climits>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
#include <string>
string a;
int l, r, ma=1;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin >> a;
    a = ' ' + a;
    for (int i = 1; i < a.size(); i++)
    {
        int j = i, d = 0, k = i;
        for (; j < a.size(); j++)
        {
            if (a[j] == '(')
                d++;
            else
                d--;
            if (d < 0)
                break;
            else if (d == 0)
                k = j;
        }
        if (k - i + 1 > ma)
            ma = k - i + 1, l = i, r = k;
    }
    if (ma == 1)
        cout << 0;
    else
        cout << ma << '\n'
             << l << ' ' << r;
}