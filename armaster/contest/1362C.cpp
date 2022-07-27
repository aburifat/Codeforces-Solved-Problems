#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll n;
    while(t--){
        cin>>n;
        ll ans=0;
        for(ll i=1;n>0;i++){
            ll tmp=(n/2);
            if(n%2)tmp++;
            n-=tmp;
            ans+=(i)*tmp;
        }
        cout<<ans<<"\n";
    }
    return 0;
}