#include<bits/stdc++.h>
#define int long long
using namespace std;
string check(int n)
{
    if(n<2) return "NO";
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return "NO";
    return "YES";
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int s=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
            s+=2;
        if(i*i==n)
            s--;
    }
    cout<<check(s);

}
