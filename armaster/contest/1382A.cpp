#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll n, m;
    while(t--){
            cin>>n>>m;
        map<ll,ll>mp;
        ll tmp;
        ll ans=-1;
        for(ll i=0;i<n;i++){
            cin>>tmp;
            mp[tmp]++;
        }
        for(ll i=0;i<m;i++){
            cin>>tmp;
            if(mp[tmp])ans=tmp;
        }
        if(ans==-1)cout<<"NO\n";
        else{
            cout<<"YES\n";
            cout<<"1 "<<ans<<"\n";
        }
    }
    return 0;
}