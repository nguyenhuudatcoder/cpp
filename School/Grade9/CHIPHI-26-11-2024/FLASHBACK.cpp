///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
long long t,s[100005];
int n,k;
//cộng dồn
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
    cin>>n>>k;
    s[0]=n; //ngày 0
    t=n;    //số visus mức 1 được sinh ra tiếp theo
    /*
    ta dễ thấy các visus đươc nâng cấp sẽ không thay đổi về số lượng
    mỗi ngày thì số lượng virus mức 1 sẽ tăng thêm s[0]+s[1]+s[2]+...+s[i-1], gọi là t
        s[0] đóng vai trò virus mức lớn nhất
        s[1] đóng vai trò virus mức lớn nhất cộng virus mức lớn nhì, virus mức lớn nhất được cộng 2 lần vì phải nâng cấp
        tương tự với các s[i...]
        từ trên mà virus 1 phải tăng thêm t
    nhưng vì số phải tính số lượng các virus cấp trên nên s[i]=s[i-1]+t
    */
    for(int i=1;i<=k;i++)
    {
        s[i]=(s[i-1]+t)%mod;
        t=(t+s[i])%mod;
    }
    cout<<s[k];
}