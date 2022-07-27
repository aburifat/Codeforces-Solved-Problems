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
        vector<pair<ll,ll> >v;
        for(ll i=1;i<=n;i++){
            ll tmp;
            cin>>tmp;
            v.push_back({tmp,i});
        }
        sort(v.begin(),v.end());
        ll len=v.size();
        ll a=v[0].first+v[1].first;
        if(a>v[len-1].first){
            cout<<"-1\n";
        }else{
            vector<ll>ans;
            ans.push_back(v[0].second);
            ans.push_back(v[1].second);
            ans.push_back(v[len-1].second);
            sort(ans.begin(),ans.end());
            for(ll i=0;i<3;i++){
                if(i!=0)cout<<" ";
                cout<<ans[i];
            }
            cout<<"\n";
        }
    }
    return 0;
}