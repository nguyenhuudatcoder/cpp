///A game is our childhood
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
string s;
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
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        int dem=1;
        while(s[i]==s[i+1]&&i<s.size()-1)
        {
            dem++;
            i++;
        }
        cout<<dem<<s[i];
    }
}