#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
constexpr ll MX=1e9+7;

ll exGCD(ll a, ll b, ll &x, ll &y)
{
    if(b==0){
        x=1; y=0; return a;
    }
    ll x1,y1;
    ll d=exGCD(b,a%b,x1,y1);
    x=y1; y=x1-(a/b)*y1;
    return d;
}


ll modInv(ll a, ll mod)
{
    ll x, y;
    ll g=exGCD(a,mod,x,y);
    if(g!=1)
        return -1; //No Solution
    x=(x%mod+mod)%mod;
    return x;
}


int main()
{
    ll t;
    cin>>t;
    ll n,k;
    while(t--){
        cin>>n>>k;
        ll val=1;
        while(k--){
            val*=n;
            val%=MX;
        }
        cout<<val<<endl;
    }
    return 0;
}