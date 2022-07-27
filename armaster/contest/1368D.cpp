#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n;
    cin>>n;
    vector<ll>cnt;
    cnt.assign(20,0);
    ll arr[n+3];
    for(ll i=0;i<n;i++)cin>>arr[i];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<20;j++)if(arr[i]&(1<<j))cnt[j]++;
    }
    ll ans=0;
    for(ll i=0;i<n;i++){
        ll num=0;
        for(ll j=0;j<20;j++){
            if(cnt[j]){
                num|=(1<<j);
                cnt[j]--;
            }
        }
        ans+=(num*num);
    }
    cout<<ans<<endl;
    return 0;
}

/*
5
991 143 445 903 399
output:
2241949
*/