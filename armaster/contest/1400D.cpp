#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll n;
    while(t--){
        cin>>n;
        ll cnt[n+3][n+3];
        for(ll i=0;i<=n;i++){
            for(ll j=0;j<=n;j++){
                cnt[i][j]=0;
            }
        }
        ll arr[n+3];
        for(ll i=0;i<n; i++){
            cin>>arr[i];
        }
        cnt[arr[n-2]][arr[n-1]]++;
        ll ans=0;
        for(ll i=n-3;i>=0;i--){
            ll b=arr[i];
            for(ll j=0;j<i;j++){
                ans+=cnt[arr[j]][b];
            }
            for(ll j=i+1;j<n;j++){
                cnt[b][arr[j]]++;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}