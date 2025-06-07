///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<climits>
#include<string>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
string a,b;
bool solve(string a)
{
    int s=0;
    for(auto i:a)
    {
        s=s*10+(i-48);
        s%=6;
    }
    return s==0;
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin>>a>>b;
    cout<<solve(a)<<'\n'<<solve(b);
}