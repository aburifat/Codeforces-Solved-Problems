#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

constexpr ll MX=200000;
constexpr ll mod=1e9+7;

ll dp[MX+5][12];
ll ctdp(ll k,ll ch)
{
    if(dp[k][ch]!=-1)return dp[k][ch];
    if(k==0)return dp[k][ch]=1;
    if(ch==9){
        dp[k][ch]=(ctdp(k-1,0)+ctdp(k-1,1))%mod;
    }else{
        dp[k][ch]=ctdp(k-1,ch+1);
    }
    return dp[k][ch];
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    for(ll i=0;i<=MX;i++){
        for(ll j=0;j<=10;j++)dp[i][j]=-1;
    }
    ll t;
    cin>>t;
    while(t--){
        string s;
        ll k;
        cin>>s>>k;
        ll len=s.size();
        ll ans=0;
        for(ll i=0;i<len;i++){
            ans=(ans+ctdp(k,s[i]-'0'))%mod;
        }
        cout<<ans<<"\n";
    }
    return 0;
}