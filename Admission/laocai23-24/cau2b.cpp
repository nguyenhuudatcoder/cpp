// legit code
#include <iostream>
#include <climits>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
string a;
int p,upper[30],lower[30];
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin >> a;
    for(auto i:a)
        if(i>='a')
            lower[i-97]++;
        else upper[i-65]++;
    for(int i=29;i>=0;i--)
        while(upper[i]--)
            cout<<char(i+65);
    for(int i=29;i>=0;i--)
        while(lower[i]--)
            cout<<char(i+97);
}