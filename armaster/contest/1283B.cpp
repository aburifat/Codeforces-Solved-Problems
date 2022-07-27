#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll val=(n/k)*k;
        ll ans=val+min((k/2),(n-val));
        cout<<ans<<endl;
    }
    return 0;
}