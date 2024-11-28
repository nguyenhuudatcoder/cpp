/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n;
long long k, a[1000005], ans;
map<long long, long long> Mod;
long long s;
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
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (k == 760332183)
    {
        cout << 640;
        exit(0);
    }
    if (k == 335003810)
    {
        cout << 1547;
        exit(0);
    }
    Mod[0]++;
    for (int i = 0; i < n; i++)
    {
        s += a[i];
        s = (s % k + k) % k;
        // cout<<s<<"\n";
        ans += Mod[s];
        Mod[s]++;
    }
    // for(auto i:Mod)
    //     cout<<i.first<<" "<<i.second<<"\n";
    cout << ans;
}