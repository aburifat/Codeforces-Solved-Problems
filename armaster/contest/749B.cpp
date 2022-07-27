#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main()
{
    ll a,b;
    vector<pair<ll,ll> >v,ans;
    for(ll i=0;i<3;i++){
        cin>>a>>b;
        v.push_back({a,b});
    }
    pair<ll,ll>pr;
    cout<<"3\n";
    for(ll i=0;i<3;i++){
        v.push_back(v[i]);
        ll x=v[i+1].first+v[i+2].first-v[i].first;
        ll y=v[i+1].second+v[i+2].second-v[i].second;
        cout<<x<<" "<<y<<"\n";
    }
    return 0;
}