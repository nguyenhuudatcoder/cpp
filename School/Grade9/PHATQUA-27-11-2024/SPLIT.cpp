/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n, m, k;
string s, t;
int sub[1005][1005];
int maxx[1005][1005];
int Max;
// quy hoạch động xâu con liên tiếp dài nhất(LCS)
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
    cin >> n >> m >> k;
    cin >> s >> t;
    s = ' ' + s;
    t = ' ' + t;
    for (int i = 1; i < s.size(); i++)
        for (int j = 1; j < t.size(); j++)
        {
            if (s[i] == t[j])
            {
                sub[i][j] = sub[i - 1][j - 1] + 1;  //LCS
                // maxx[i][j] = max({sub[i][j], maxx[i - sub[i][j]][j - sub[i][j]] + sub[i][j]});
            }
            maxx[i][j] = max({maxx[i][j - 1], maxx[i - 1][j], maxx[i - 1][j - 1], //max mảng 2 chiều
                            maxx[i - sub[i][j]][j - sub[i][j]] + sub[i][j]}); //max của đoạn xâu liên tiếp trước + đoạn bây giờ
                            //maxx[i-sub[i][j]][j-sub[i][j]] bỏ đi đoạn sub[i][j] liên tiếp dài nhất hiện tại
        }
    // for(int i=1;i<s.size();i++)
    // {
    //     for(int j=1;j<t.size();j++)
    //         cout<<sub[i][j]<<" ";
    //     cout<<"\n";
    // }
    // for(int i=1;i<s.size();i++)
    // {
    //     for(int j=1;j<t.size();j++)
    //         cout<<maxx[i][j]<<" ";
    //     cout<<"\n";
    // }
    if (maxx[n][m] >= k)
        cout << maxx[n][m];
    else
        cout << -1;
}