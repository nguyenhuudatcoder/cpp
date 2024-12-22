/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
string k, ans;
char ch;
int pos;
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
    cin >> k >> ch;
    k = ' ' + k;
    for (int i = k.size() - 1; i >= k.size() / 2; i--)
    {
        if (k[i] == ch)
        {
            pos = i + 1;
            break;
        }
    }
    cout << pos << "\n";
    int dem = 0;
    for (int i = 1; i < pos; i++)
    {
        if (k[i] == ch)
            dem++;
    }
    cout << dem << "\n";
    if (pos - 1 - dem > k.size() - pos + 1)
    {
        cout << -1;
        exit(0);
    }
    while (pos - dem - 1 < k.size() - pos + 1)
        pos++;
    int l = 1, r = pos;
    while (l < pos && r < k.size())
    {
        while (k[l] == ch)
        {
            ans =ans+ k[l];
            l++;
        }
        ans += k[l];
        if (k[l] != k[r])
        {
            cout << -1;
            exit(0);
        }
        l++;
        r++;
    }
    cout << ans;
}