///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<ios>
#include<climits>
#include<cmath>
#include<array>
#include<map>
#include<unordered_map>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,a[1000005],dem;
bool save[1000005];
int snt[1000005];
unordered_map<int,int>d;
void make_sieve()
{
    for(int i=2;i<=1e6;i++)
        if(snt[i]==0)
            for(int j=i;j<=1e6;j+=i)
                if(snt[j]==0)
                    snt[j]=i;  
}
void ptich(int n,int i)
{
    for(int i=2;i<=sqrt(n);i++)
        while(n%i==0)
        {
            d[i]++;
            n/=i;
        }
    int check=0;
    while(n>1){
        d[snt[n]]++;
        if(d[snt[n]]&1)
            check++;
        else check--;
        n/=snt[n];
    }
    if(check>0)
        save[i]=1;
    else dem++;
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    // cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    make_sieve();
    for(int i=0;i<n;i++){
        cin>>a[i];
        ptich(a[i],i);
    }
    cout<<dem<<'\n';
    for(int i=0;i<n;i++)
        if(save[i])
            cout<<"NO ";
        else cout<<"YES ";
}