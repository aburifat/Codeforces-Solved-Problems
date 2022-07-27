#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, q;
    cin>>n>>q;
    ll arr[n+5];
    ll col[55];
    map<ll,ll>mp;
    deque<pair<ll,ll> >val;
    for(ll i=0;i<n; i++){
        cin>>arr[i];
        if(!mp[arr[i]]){
            mp[arr[i]]++;
            val.push_back({arr[i],i+1});
            col[arr[i]]=i+1;
        }
    }
    ll tmp;
    ll len=val.size();
    vector<ll>ans;
    for(ll i=0;i<q;i++){
        cin>>tmp;
        ans.push_back(col[tmp]);
        for(ll i=0;i<len;i++){
            if(val[i].first==tmp){
                val.erase(val.begin()+i);
                val.push_front({tmp,1});
                col[tmp]=1;
                break;
            }else{
                val[i].second=val[i].second+1;
                col[val[i].first]=val[i].second;
            }
        }
    }
    for(ll i=0;i<q;i++){
        if(i!=0)cout<<" ";
        cout<<ans[i];
    }
    cout<<"\n";
    return 0;
}