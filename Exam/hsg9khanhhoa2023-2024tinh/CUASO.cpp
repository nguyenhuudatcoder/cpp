/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
#define mod 1000000007
using namespace std;
int n, a[1000005];
int Count[1000005];
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        Count[a[i]]++;
    }
    sort(a,a+n,greater<int>());
    for(int i=0;i<n-2;i++)
    {
        if(a[i]!=a[i+1])
        {
            if(Count[a[i]]>1)
            {
                if(Count[a[i]]>=4)
                {
                    cout<<a[i]*4;
                    exit(0);
                }
                else
                {
                    for(int j=i+1;j<n-1;j++)
                    {
                        if(Count[a[j]]>1)
                        {
                            cout<<a[j]*2+a[i]*2;
                            exit(0);
                        }
                    }
                }
                break;
            }
        }
    }
    cout << -1;
}