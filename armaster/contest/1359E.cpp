#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

constexpr ll MX=500009;
constexpr ll mod=998244353;
vector<ll>fact;

ll modAdd(ll x, ll y)
{
    x+=y;
    if(x>=mod)return x-mod;
    return x;
}

ll modMul(ll x, ll y)
{
    return (x*y)%mod;
}

ll binPow(ll x, ll p)
{
    if(p==0)return 1;
    if(p&1)return modMul(x,binPow(x,p-1));
    return binPow(modMul(x,x),p/2);
}

ll modInv(ll x)
{
    return binPow(x,mod-2);
}

void preCom()
{
    fact.resize(MX+1);
    fact[0]=1;
    for(ll i=1;i<=MX;i++){
        fact[i]=modMul(fact[i-1],i);
    }
}

ll nCr(ll n, ll r)
{
    if(n<r)return 0;
    return modMul(modMul(fact[n],modInv(fact[r])),modInv(fact[n-r]));
}

int main()
{
    preCom();
    ll n, k;
    cin>>n>>k;
    ll ans=0;
    for(ll i=1;i<=n;i++){
        ll d=n/i;
        ans=modAdd(ans,nCr(d-1,k-1));
    }
    cout<<ans<<"\n";
    return 0;
}