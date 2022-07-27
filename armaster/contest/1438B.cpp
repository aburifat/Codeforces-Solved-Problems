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
        map<ll,ll>mp;
        ll tmp;
        bool ck=false;
        for(ll i=0;i<n;i++){
            cin>>tmp;
            if(mp[tmp])ck=true;
            mp[tmp]++;
        }
        if(ck)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}