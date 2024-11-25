/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n, m;
vector<pair<long long, long long>> tam;
long long a, b;
vector<pair<long long, long long>> c;
bool compare(pair<long long, long long> a, pair<long long, long long> b)
{
    if (a.first == b.first)
        return a.second <= b.second;
    return a.first < b.first;
}
void waiting(long long a)
{
    int l = 0, r = c.size() - 1;
    int ans = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (c[m].first <= a && c[m].second > a)
        {
            cout << 0 << "\n";
            return;
        }
        else if (c[m].first > a)
        {
            r = m - 1;
            ans = m;
        }
        else if (c[m].second <= a)
            l = m + 1;
    }
    if (ans == -1)
        cout << -1 << "\n";
    else
    {
        cout << c[ans].first - a << "\n";
    }
}
void shop()
{
    int j;
    for (int i = 0; i < tam.size(); i++)
        if (tam[i].first != tam[i + 1].first || i == tam.size() - 1)
        {
            c.push_back(make_pair(tam[i].first, tam[i].second));
            j = i + 1;
            break;
        }
    while (j < tam.size())
    {
        if (tam[j].first >= c[c.size() - 1].second)
        {
            while (tam[j].first == tam[j + 1].first)
                j++;
            c.push_back(make_pair(tam[j].first, tam[j].second));
        }
        else if (tam[j].second > c[c.size() - 1].second)
            c[c.size() - 1].second = tam[j].second;
        j++;
    }
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
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        tam.push_back(make_pair(a, b));
    }
    sort(tam.begin(), tam.end(), compare);
    shop();
    // for(int i=0;i<c.size();i++)
    //     cout<<c[i].first<<" "<<c[i].second<<"\n";
    while (m--)
    {
        cin >> a;
        waiting(a);
    }
}