///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<climits>
#include<cmath>
#include<string>
#include<algorithm>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
string s,ans;
string get(string a,string b)
{
    string x=a,y=b;
    while(a.size()<b.size())
        a='0'+a;
    while(a.size()>b.size())
        b='0'+b;
    if(a>b)
        return x;
    else return y;
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    getline(cin,s);
    int d=0;
    for(int i=0;i<s.size();i++)
        if(s[i]>='0'&&s[i]<='9')
        {
            d++;
            string x="";
            while(s[i]>='0'&&s[i]<='9'&&i<s.size())
                x=x+s[i++];
            ans=get(ans,x);
        }
    cout<<d<<'\n'<<ans;
}