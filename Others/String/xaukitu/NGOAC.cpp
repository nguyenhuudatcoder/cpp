///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
string s;
int dem;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>s;
    for(auto i:s)
    {
        if(i!='('&&i!=')')
        {
            cout<<"KHONG HOP LE";
            exit(0);
        }
        if(dem<0)
        {
            cout<<"KHONG DUNG";
            exit(0);
        }
        if(i=='(')
            dem++;
        else dem--;
    }
    if(dem>0)
        cout<<"KHONG DUNG";
    else if(dem<0)
        cout<<"KHONG DUNG";
    else cout<<"DUNG";
}