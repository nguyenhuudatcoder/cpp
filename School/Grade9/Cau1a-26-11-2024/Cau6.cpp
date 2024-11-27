/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
string s;
int ans, t;
// đi tìm chữ giống nhau gần nhau nhất
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
    cin >> t;
    map<char, int> pos;
    while (t--)
    {
        ans = 0;
        cin >> s;
        s = ' ' + s;
        for (int i = 1; i < s.size(); i++)
        {
            if (pos[s[i]] > 0)
            {
                ans += pos.size()-1;
                pos.clear();
            }
            else
                pos[s[i]] = i;
        }
        ans+=pos.size();
        cout << ans << "\n";
        // cout<<pos.size()<<"\n";
        pos.clear();
        // for(auto i:dem)
        //     cout<<i.second<<" ";
        // cout<<"\n";
    }
}