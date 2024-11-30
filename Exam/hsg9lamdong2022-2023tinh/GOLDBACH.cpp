/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
bool snt[10000005];
vector<int> prime;
void make_sieve()
{
    snt[0] = snt[1] = 1;
    for (int i = 2; i <= sqrt(1e7); i++)
        if (snt[i] == 0)
        {
            prime.push_back(i);
            for (int j = i * i; j <= 1e7; j += i)
                snt[j] = 1;
        }
}
bool primechecker(long long n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
void answer(long long k)
{
    for (auto a : prime)
    {
        if (primechecker(k - a))
        {
            cout << a<<" "<<k-a<<"\n";
            return;
        }
    }
    cout<<"NO\n";
}
int n;
long long k;
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
    make_sieve();
    cin >> n;
    while (n--)
    {
        cin >> k;
        answer(k);
    }
}