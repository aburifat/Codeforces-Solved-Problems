#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, d;
        cin>>n>>d;
        ll arr[n+5];
        ll ans=0;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            if(i!=0){
                ll tmp=min((d/i),arr[i]);
                d-=(tmp*i);
                ans+=tmp;
            }else{
                ans+=arr[i];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}