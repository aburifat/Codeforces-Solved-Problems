#include<bits/stdc++.h>
using namespace std;
typedef long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<pair<ll,ll> >v;
        for(ll i=0;i<n; i++){
            ll tmp;
            cin>>tmp;
            v.push_back({tmp,i});
        }
        sort(v.begin(),v.end());
        ll len=v.size();
        if(v[0].first==v[1].first)cout<<v[len-1].second+1<<"\n";
        else cout<<v[0].second+1<<"\n";
    }
}