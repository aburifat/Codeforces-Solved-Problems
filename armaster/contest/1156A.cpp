#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main()
{
    ll pt[]={12,21,23,32,31,13};
    ll val[]={3,3,-1,-1,4,4};
    map<ll,ll>mp;
    for(ll i=0;i<6;i++){
        mp[pt[i]]=i;
    }
    ll n;
    cin>>n;
    ll arr[n+5];
    ll ans=0,prev=0;
    for(ll i=0; i<n; i++){
        cin>>arr[i];
        if((ans>=0)&&(i!=0)){
            ll ck=(arr[i-1]*10)+arr[i];
            if(val[mp[ck]]==-1)ans=-1;
            else{
                ans+=val[mp[ck]];
                if((prev==31)&&pt[mp[ck]]==12)ans--;
            }
            prev=pt[mp[ck]];
        }
    }
    if(ans>=0){
        cout<<"Finite\n";
        cout<<ans<<"\n";
    }else{
        cout<<"Infinite\n";
    }
    return 0;
}