///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<climits>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
#include<map>
#include<unordered_map>
unordered_map<string,int> d;
int n;
string a;
int dem;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(d[a]&1) dem++;
        d[a]++;
    }
    cout<<dem;
}