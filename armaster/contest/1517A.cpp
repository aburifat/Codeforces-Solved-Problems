#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
constexpr ll MX=2050;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ans=0;
        if(n%MX!=0)cout<<"-1\n";
        else{
            ll val=n/MX;
            while(val){
                ans+=(val%10);
                val/=10;
            }
            cout<<ans<<"\n";
        }
    }
    return 0;
}