#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ans=0;
        for(ll i=0;i<n; i++){
            ll tmp;
            cin>>tmp;
            if(tmp!=2)ans++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}