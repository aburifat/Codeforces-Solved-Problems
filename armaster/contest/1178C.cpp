#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

ll big_mod(ll b,ll p,ll mod){
    if(p==0){
        return 1;
    }
    else if(p%2==1){
        ll p1=b%mod;
        ll p2=(big_mod(b,p-1,mod))%mod;
        return (p1*p2)%mod;
    }
    else if(p%2==0){
        ll p1=(big_mod(b,p/2,mod))%mod;
        return (p1*p1)%mod;
    }
}
int main ()
{
    ll a,b, ans;
    cin>>a>>b;
    ans=big_mod(2,a+b,998244353);
    cout<<ans<<endl;
    return 0;
}