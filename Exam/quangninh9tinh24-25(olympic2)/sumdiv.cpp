///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<climits>
#include<algorithm>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
ll a,b,n;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>a>>b;
    // số cuối cùng %a là n/a*a
    // (%a-a)/a+1 = shha
    // (%a+a)*shha/2
    ll ab=a/__gcd(a,b)*b;
    ll lasta=(n/a),lastb=n/b,lastab=n/ab;
    lasta*=a;
    lastb*=b;
    lastab*=ab;
    ll ssha=(lasta-a)/a+1,sshb=(lastb-b)/b+1,sshab=(lastab-ab)/ab+1;
    cout<<(lasta+a)*ssha/2+(lastb+b)*sshb/2-(lastab+ab)*sshab/2;
}