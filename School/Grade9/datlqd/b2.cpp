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
    getline(cin,s);
    while(s[0]==' ') s.erase(0,1);
    while(s[s.size()-1]==' ') s.erase(s.size()-1,1);
    for(int i=0;i<s.size();i++)
        if(s[i]==' ')
            while(s[i+1]==' ')
                s.erase(i+1,1);
    cout<<s;
}