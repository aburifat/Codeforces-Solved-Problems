#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    ll n;
    while(t--){
        cin>>n;
        ll ck=0;
        for(ll i=0;i<n; i++){
            ll tmp;
            cin>>tmp;
            ll sq=sqrt(tmp);
            sq*=sq;
            if(sq!=tmp)ck=1;
        }
        if(ck)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}