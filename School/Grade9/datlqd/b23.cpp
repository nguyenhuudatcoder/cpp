///A game is our childhood
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
string s;
map<char,int> dem;
int ans;
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
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        dem[s[i]]++;
        ans=max(ans,dem[s[i]]);
    }
    // for(auto i:dem) cout<<i.first<<"\n";
    for(auto i:dem)
        if(i.second==ans)
            cout<<i.first<<" "<<i.second<<"\n";
}