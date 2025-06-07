///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<climits>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n;
string a;
#include<algorithm>
int d[30],maxx;
char x;
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
        x='a';
        cin>>a;
        for(auto i:a)
        {
            d[i-65]++;
            if(d[i-65]>=maxx){
                if(d[i-65]>maxx)
                    x=i;
                else x=min(x,i);
                maxx=max(d[i-65],maxx);
            }
        }
        cout<<x;
        maxx=0;
        for(int i=0;i<30;i++)
            d[i]=0;
    }
}