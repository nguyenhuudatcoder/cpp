#include <bits/stdc++.h>
#define ll long long
using namespace std;
int v[30];
int s[100005];
int dem[2000005][30];
ll ans;
string a;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for (int i = 0; i < 26; i++)
        cin >> v[i];
    cin >> a;
    for(int i=1;i<=a.size();i++)
    {
        s[i]=s[i-1]+v[a[i-1]-97];
        ans+=dem[s[i-1]][a[i-1]-97];
        dem[s[i]][a[i-1]-97]++;
    }cout<<ans;
}