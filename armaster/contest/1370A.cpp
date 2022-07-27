#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MX=1e6;

bitset<1000000>bs;
vector<ll>primes;
void sieve(ll ub){
    bs.set();
    bs[0]=bs[1]=0;
    primes.push_back(2);
    for(ll i=4;i<=ub;i+=2)bs[i]=0;
    for(ll i=3;i<=ub;i+=2){
        if(bs[i]){
            for(ll j=i*i;j<=ub;j+=i){
                bs[j]=0;
            }
            primes.push_back(i);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    sieve(MX);
    ll t;
    cin>>t;
    ll n;
    while(t--){
        cin>>n;
        while(bs[n])n--;
        ll ans=1;
        if(n==1){
            cout<<ans<<"\n";
            continue;
        }
        if(n%2==0){
            ans=max(ans,n/2);
        }else{
            ll len=primes.size();
            for(ll i=0;i<n;i++){
                if(n%primes[i]==0){
                    ans=max(ans,n/primes[i]);
                    break;
                }
            }
            n--;
            ans=max(ans,n/2);
        }
        cout<<ans<<"\n";
    }
    return 0;
}