#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MX=2e6+3;
const ll mod=1e9+7;

ll sgl[MX],dbl[MX],dp[MX],ans[MX];
void inis(){
    dbl[0]=dbl[1]=0;
    sgl[0]=sgl[1]=1;
    for(ll i=2;i<MX;i++){
        sgl[i]=((2*dbl[i-1])%mod+sgl[i-1]%mod)%mod;
        dbl[i]=sgl[i-1];
    }
    for(ll i=3;i<MX;i++){
        dbl[i]=(dbl[i]+dbl[i-3])%mod;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    inis();
    ll t;
    cin>>t;
    ll n;
    while(t--){
        cin>>n;
        ll ans=(4*dbl[n-1])%mod;
        cout<<ans<<"\n";
    }
    return 0;
}