/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n, m, a[1005], b[1005], k;
int s[1005][1005], maxx[1005][1005];
vector<int> pos;
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
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (j >= b[i])
            {
                s[i][j] = max(maxx[i - 1][j - b[i]] + a[i], s[i][j - 1]);
                // k=max(k,s[i][j]);
            }
            maxx[i][j] = max({maxx[i][j - 1], s[i][j], maxx[i - 1][j]});
            // cout << s[i][j] << " ";
            // cout<<maxx[i][j]<<" ";
        }
        // cout << "\n";
    }
    cout << maxx[n - 1][m] << "\n";
    // cout<<maxx[0][0]<<"\n";
    int t = maxx[n - 1][m];
    int c=m;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = c; j >=1; j--)
        {
            if (s[i][j] == t)
            {
                t -= a[i];
                // cout<<t<<"\n";
                c-=b[i];
                k++;
                // i=n;
                pos.push_back(i + 1);
                break;
            }
        }
        if (t == 0)
            break;
    }
    cout << k << " ";
    sort(pos.begin(), pos.end());
    for (int i = 0; i < pos.size(); i++)
        cout << pos[i] << " ";
}