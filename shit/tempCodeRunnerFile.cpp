// legit code, quality over quantity
#include <iostream>
#include <unordered_map>
#include<algorithm>
#define ll long long
using namespace std;
ll d;
int n,a[100005],p;
unordered_map<int,int>c;
void get1(int i)
{
	for(int j=n-1;j>i;j--)
		d+=2*c[a[i]+a[j]],c[a[j]]++;
}
void get2(int i)
{
	for(int j=i+1;j<n;j++)
		d+=2*c[a[i]+a[j]],c[a[j]]++;
}
main()
{
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	// sort(a,a+n);
	// int p=lower_bound(a,a+n,0)-a;
	for(int i=0;i<n-2;i++)
	{
		if(a[i]<0)
			get2(i);
		else get1(i);
		c.clear();
	}
	cout<<d;
}