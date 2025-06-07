///legit code
#include <iostream>
#define ll long long
using namespace std;
string x,y;
int q,v;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin>>x>>y;
    cin>>q;
    while(q--)
    {

        cin>>v;
        if(v==1){
            cin>>v;
            if(x[v-1]==y[v-1])
                cout<<"YES";
            else cout<<"NO";
        }
        else{
            cin>>v;
            if(x[v-1]==y[y.size()-v])
                cout<<"YES";
            else cout<<"NO";
        }
        cout<<"\n";
    }
}
