///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<ios>
#include<array>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n;
int a[10005];
void get(int i)
{
    for(int j=i+1;j<n;j++)
        if(a[j]>a[i])
        {
            cout<<a[j]<<' ';
            return;
        }
    cout<<-1<<' ';
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        get(i);
}