/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, m;
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
    cin >> n >> m;
    int a = 0;
    int res = n;
    // while (res > 0)
    // {
    //     a += res / m;
    //     res /= m;
    // }
    if (m < 4)
        while (res > 0)
        {
            a += res / m;
            res /= m;
        }
    else
        for (int i = 1; i <= sqrt(m); i++)
        {
            if (m % i == 0)
            {
                int b=0;
                int j = m / i;
                res = n;
                while (res > 0)
                {   
                    b += res / j;
                    res /= j;
                }
                a=max(a,b);
            }
        }
    cout << a;
}