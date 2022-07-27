#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll n, m;
    while(t--){
        cin>>n>>m;
        map<ll,ll>ci,cj;
        ll cti=0, ctj=0;
        ll tmp;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                cin>>tmp;
                if(tmp){
                    if(!ci[i]){
                        ci[i]++;
                        cti++;
                    }
                    if(!cj[j]){
                        cj[j]++;
                        ctj++;
                    }
                }
            }
        }
        cti=n-cti;
        ctj=m-ctj;
        ll ans=min(cti,ctj);
        ll ck=0;
        if(ans%2)ck=1;
        if(!ck)cout<<"Vivek\n";
        else cout<<"Ashish\n";
    }
    return 0;
}