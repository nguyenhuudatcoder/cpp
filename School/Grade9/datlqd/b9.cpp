///A game is our childhood
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
char k;
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
    getline(cin,s);
    cin>>k;
    s=' '+s;
    for(int i=1;i<s.size();i++)
    {
        // cout<<s[i];
        if(s[i]==k)
        {
            cout<<i;
            exit(0);
        }
    }
    cout<<0;
}