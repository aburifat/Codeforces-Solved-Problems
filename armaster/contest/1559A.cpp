#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    //ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n+5];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        ll bs[70];
        memset(bs,1,sizeof(bs));
        for(ll i=0;i<n;i++){
            ll num=arr[i];
            vector<ll>v;
            while(num>0){
                ll dgt=num%2;
                num/=2;
                v.push_back(dgt);
            }
            ll len=v.size();
            for(ll i=0;i<70;i++){
                if(i>=len)bs[i]=0;
                else bs[i]=bs[i]&v[i];
            }
        }
        ll ans=0;
        for(ll i=70;i>=0;i--){
            ans=((ans*2)+bs[i]);
        }
        cout<<ans<<"\n";
    }
    return 0;
}