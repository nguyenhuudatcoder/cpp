/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
#define mod 1000000007
using namespace std;
int n, m, x, r;
vector<pair<int, int>> a;
bool compare(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first < b.first;
}
int res[2005], ans;
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
    for (int i = 0; i < m; i++)
    {
        cin >> x >> r;
        if (x - r < 1)
            a.push_back(make_pair(1, r + x));
        else
            a.push_back(make_pair(x - r, r + x));
    }
    a.push_back(make_pair(0, 0));
    sort(a.begin(), a.end(), compare);
    for (int i = 1; i < a.size(); i++)
        for (int j = 0; j < i; j++)
        {
            if (a[j].second < a[i].first)
                res[i] = max(res[i], res[j] + a[i].second - a[i].first + 1);
            else
                res[i] = max(res[i], res[j] + a[i].second - a[j].second);
            ans = max(ans, res[i]);
        }
    cout << ans;
}