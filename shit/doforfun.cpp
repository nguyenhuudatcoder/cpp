///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<ios>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int t,n;
ll a,x;
kien()
{
	// if(fopen(".inp","r"))
	// {
	// 	freopen(".inp","r",stdin);
	// 	freopen(".out","w",stdout);
	// }
	cin.tie(0)->sync_with_stdio(0);
	cin>>t;
	while(t--)
	{
		cin>>n>>x;
		int p=-1;
		ll ans=-1;
		for(int i=1;i<=n;i++)
		{
			cin>>a;
			if(a<=x)
				if(ans<a)
				{
					ans=a;
					p=i;
				}
		}
		cout<<p<<'\n';
	}
}