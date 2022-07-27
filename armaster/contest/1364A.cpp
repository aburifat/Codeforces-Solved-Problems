#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll n, x;
    while(t--){
        cin>>n>>x;
        ll arr[n+3];
        ll ct=0;
        ll sum=0;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
            if(arr[i]%x==0)ct++;
        }
        if(ct==n){
            cout<<"-1\n";
            continue;
        }
        ll st=0,ed=0;
        for(ll i=0; i<n;i++){
            if(arr[i]%x!=0)break;
            st++;
        }
        for(ll i=(n-1);i>=0;i--){
            if(arr[i]%x!=0)break;
            ed++;
        }
        if(sum%x!=0)cout<<n<<"\n";
        else{
            ll ans=n-min(st,ed)-1;
            cout<<ans<<"\n";
        }
    }
    return 0;
}