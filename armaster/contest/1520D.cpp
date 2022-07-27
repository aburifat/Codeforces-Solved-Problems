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
        ll arr[n+5];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            arr[i]-=i;
        }
        vector<ll>v;
        map<ll,ll>mp;
        for(ll i=0;i<n;i++){
            if(mp[arr[i]]==0)v.push_back(arr[i]);
            mp[arr[i]]++;
        }
        ll ans=0;
        ll len=v.size();
        for(ll i=0;i<len;i++){
            ll ct=mp[v[i]];
            ll tmp=ct*(ct-1);
            tmp/=2;
            ans+=tmp;
        }
        cout<<ans<<"\n";
    }
    return 0;
}