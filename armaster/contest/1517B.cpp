#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
constexpr ll MX=2050;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll arr[n+5][m+5];
        vector<pair<pair<ll,ll>,ll> >v;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                cin>>arr[i][j];
                v.push_back({{arr[i][j],i},j});
            }
        }
        sort(v.begin(),v.end());
        ll arr2[n+5][m+5];
        for(ll i=0;i<=n;i++){
            for(ll j=0;j<=m;j++){
                arr2[i][j]=0;
            }
        }
        for(ll i=0;i<m;i++){
            ll val=v[i].first.first;
            ll ni=v[i].first.second;
            arr2[ni][i]=val;
        }
        ll len=v.size();
        ll js[n+5];
        for(ll i=0;i<=n;i++)js[i]=0;
        for(ll k=m;k<len;k++){
            ll val=v[k].first.first;
            ll ni=v[k].first.second;
            ll nj=v[k].second;
            while(arr2[ni][js[ni]]!=0)js[ni]++;
            arr2[ni][js[ni]]=val;
            js[ni]++;
        }
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                if(j!=0)cout<<" ";
                cout<<arr2[i][j];
            }
            cout<<"\n";
        }
    }
    return 0;
}