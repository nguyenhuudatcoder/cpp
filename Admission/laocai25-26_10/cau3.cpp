///legit code
#include <iostream>
#include <cmath>
#define ll long long
using namespace std;
ll g,l;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin>>g>>l;
    if(l%g!=0)
        cout<<-1;
    else
        for(ll i=sqrt(l/g); i>=1; i--)
            if((l/g)%i==0)
            {
                cout<<g*(i+(l/g)/i);
                exit(0);
            }
}
