#include<bits/stdc++.h>
using namespace std;
string s,ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(i%2==0)
            ans=s[i]+ans;
        else ans=ans+s[i];
    }
    if(s.size()%2==0)
        for(int i=ans.size()-1;i>=0;i--)
            cout<<ans[i];
    else                
    cout<<ans;
}   