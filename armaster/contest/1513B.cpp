#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

constexpr ll MX=200000;
constexpr ll mod=1e9+7;

vector<ll>fact;
void ctFact()
{
    fact.resize(MX+5);
    fact[0]=fact[1]=1;
    for(ll i=2;i<=MX;i++)fact[i]=(fact[i-1]*i)%mod;
}

int main(){
    ctFact();
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n+5];
        ll andd;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            if(i==0)andd=arr[i];
            else andd=andd&arr[i];
        }
        ll ct=0;
        //cout<<andd<<" ok\n";
        for(ll i=0;i<n;i++){
            if(arr[i]==andd)ct++;
        }
        ll ans=(ct*(ct-1))%mod;
        ans=(ans*fact[n-2])%mod;
        cout<<ans<<"\n";
    }
    return 0;
}