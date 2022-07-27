#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main()
{
    string s[]={"Ashish","Utkarsh"};
    ll t;
    cin>>t;
    while(t--){
        ll mx=0;
        ll r,k;
        cin>>r>>k;
        for(ll i=k;i<=r;i+=k){
            ll ct=i/k;
            ll y=sqrt((r*r)-(i*i));
            ct+=(y/k);
            mx=max(mx,ct);
        }
        ll ans=0;
        if(mx%2==0)ans=1;
        cout<<s[ans]<<"\n";
    }
    return 0;
}