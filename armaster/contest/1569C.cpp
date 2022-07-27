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

ll modSub(ll x, ll y) {
	x -= y;
	if (x < 0) return x + mod;
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

void init()
{
    fact.resize(MX+1);
    fact[0]=1;
    for(ll i=1;i<=MX;i++){
        fact[i]=modMul(fact[i-1],i);
    }
}

ll nPr(ll n, ll r){
	if(n<r)return 0;
    return modMul(fact[n],modInv(fact[n-r]));
}

ll nCr(ll n, ll r)
{
    if(n<r)return 0;
    return modMul(nPr(n,r),modInv(fact[r]));
}

int main(){
	//ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//freopen("input.io","r",stdin);
	//freopen("output.io","w",stdout);
	init();
	ll t;
	cin>>t;
	while(t--){
		vector<ll>v;
		ll n,tmp;
		cin>>n;
		for(ll i=0;i<n;i++){
			cin>>tmp;
			v.push_back(tmp);
		}
		sort(v.begin(),v.end());
		ll mx=1,sec_mx=0,mn=0;
		for(ll i=0;i<n-1;i++){
			if(v[i]==v[n-1])mx++;
			else if(v[i]==(v[n-1]-1))sec_mx++;
			else mn++;
		}
		ll ans=fact[n];
		if(mx==1){
			ans=modSub(ans,fact[n-1]);
			for(ll i=1;i<=mn;i++){
				ll val=modMul(nPr(mn,i),fact[n-1-i]);
				ans=modSub(ans,val);
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}