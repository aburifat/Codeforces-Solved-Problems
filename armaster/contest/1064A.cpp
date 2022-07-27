#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main()
{
    ll t=1;
    //cin>>t;
    ll n;
    for(ll T=1;T<=t;T++){
        vector<ll>v;
        for(ll i=0;i<3;i++){
            ll tmp;
            cin>>tmp;
            v.push_back(tmp);
        }
        sort(v.begin(),v.end());
        ll a=v[0]+v[1];
        v[2]++;
        ll ans=v[2]-a;
        if(ans<0)ans=0;
        cout<<ans<<"\n";
    }
    return 0;
}