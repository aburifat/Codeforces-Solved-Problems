#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--){
        map<ll,ll>m;
        ll n,s,k;
        cin>>n>>s>>k;
        for(ll i=0; i<k; i++){
            ll tmp;
            cin>>tmp;
            m[tmp]=1;
        }
        ll ans1=1000000005,ans2=1000000005;
        for(ll i=s; i<=n; i++){
            if(m[i]==0){
                ans1=i-s;
                break;
            }
        }
        for(ll i=s; i>=1; i--){
            if(m[i]==0){
                ans2=s-i;
                break;
            }
        }
        cout<<min(ans1,ans2)<<endl;
    }
    return 0;
}