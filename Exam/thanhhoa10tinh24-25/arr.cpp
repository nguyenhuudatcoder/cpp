#include<iostream>
#include<map>
#include<unordered_map>
#define ll long long
using namespace std;
int n,a[100005];
unordered_map<int,int> d;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(d[a[i]]==0)
            cout<<a[i]<<' ';
        d[a[i]]++;
    }
}