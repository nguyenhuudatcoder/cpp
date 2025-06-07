// legit code, quality over quantity
#include <iostream>
#define ll long long
using namespace std;
ll n, s;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;
    while (n)
        s += n / 5, n /= 5;
    cout << s;
}