#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
int check(int n)
{
    int s=0;
    while(n>0){
        s+=n%10;
        n/=10;
    }
    return s;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=82;i>0;i--)
    {
        if(check(n-i)==i){
            cout<<n-i;
            return 0;
        }
    }
    cout<<-1;
}
