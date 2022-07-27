#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

constexpr ll MX=1e9;

map<ll,ll>numCk;
vector<ll>numList;

int main()
{
    ll n;
    cin>>n;
    ll arr[n+1];
    for(ll i=0; i<n; i++){
        cin>>arr[i];
        if(!numCk[arr[i]]){
            numCk[arr[i]]++;
            numList.push_back(arr[i]);
        }
    }
    ll max_sum=0;
    for(auto u:numList){
        ll maxSoFar=0;
        ll currMax=0;
        for(ll i=0;i<n;i++){
            ll val=(arr[i]>u? -MX: arr[i]);
            currMax=max(val,currMax+val);
            maxSoFar=max(maxSoFar,currMax-u);
        }
        max_sum=max(max_sum,maxSoFar);
    }
    cout<<max_sum<<"\n";
    return 0;
}