#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main()
{
    ll t;
    cin>>t;
    ll n;
    for(ll T=1;T<=t;T++){
        cin>>n;
        vector<ll>v;
        map<ll,ll>mp;
        for(ll i=0;i<n;i++){
            ll tmp;
            cin>>tmp;
            if(!mp[tmp])v.push_back(tmp);
            mp[tmp]++;
        }
        set<ll>s;
        for(ll i=0;i<n-1;i++){
            for(ll j=i+1;j<n;j++){
                s.insert(abs(v[i]-v[j]));
            }
        }
        cout<<s.size()<<"\n";
    }
    return 0;
}