#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
//hello world

int main()
{
    fast;
    ll t;
    cin>>t;
    ll n, k;
    while(t--){
        cin>>n>>k;
        ll arr[n+3];
        map<ll,ll>mp,mp2;
        set<ll>val,vv;
        //vector<ll>vv,cct;
        ll tmp;
        for(ll i=0;i<n;i++){
            cin>>tmp;
            val.insert(tmp);
            mp[tmp]++;
        }
        ll len=val.size();
        ll dd=0;
        for(auto j:val){
            //cout<<j<<" "<<mp[j]<<endl;
            ll u=j;
            if(u>=k)u%=k;
            if(u){
                u=k-u;
                vv.insert(u);
                mp2[u]+=mp[j];
            }
        }
        ll mx=0;
        for(auto u:vv){
            ll tmp=u+(k*(mp2[u]-1));
            if(mx<tmp)mx=tmp;
        }
        if(mx)mx++;
        cout<<mx<<"\n";
    }
    return 0;
}