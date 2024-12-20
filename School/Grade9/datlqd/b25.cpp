/// A game is our childhood
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
string s;
vector<string> a;
string ans;
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
    while (cin >> s)
    {
        a.push_back(s);
        if(s.size()>ans.size())
            ans=s;
    }
    cout<<a.size()<<"\n"<<ans<<"\n";
    for (int i = a.size() - 1; i >= 0; i--)
    {
        if (i == 0)
        {
            cout << a[i];
            exit(0);
        }
        cout << a[i] << " ";
    }
}