#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n;
    cin>>n;
    map<ll,ll>arr1;
    ll tmp;
    for(ll i=0;i<n;i++){
        cin>>tmp;
        arr1[tmp]=i;
    }
    map<ll,ll>ct;
    ll ans=0;
    for(ll i=0;i<n;i++){
        cin>>tmp;
        ll val=arr1[tmp]-i;
        if(val<0)val=n+val;
        ct[val]++;
        if(ans<ct[val])ans=ct[val];
    }
    cout<<ans<<endl;
    return 0;
}