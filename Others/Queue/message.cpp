/// Made by Nguyễn Hữu Đạt
#include <iostream>
#include <climits>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, a[100005];
#include <queue>
deque<int> dem;
bool d[100005];
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        if (d[a[i]] == 0)
        {
            if (dem.size()==k)
            {
                d[dem.front()] = 0;
                dem.pop_front();
            }
            d[a[i]]=1;
            dem.push_back(a[i]);
        }
    }
    for(auto i:dem)
        cout<<i<<' ';
}
/*
5
1 2 1 3 4
3
*/