#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    ll n,m;
    while(t--) {
        cin>>n>>m;
        ll sum=0;
        ll minn=LONG_MAX;
        ll minus_ct=0;
        bool has_zero=false;
        for(ll i=0; i<n; i++) {
            for(ll j=0; j<m; j++) {
                ll tmp;
                cin>>tmp;
                if(tmp<0){
                    minus_ct++;
                    tmp=(-tmp);
                }
                minn=min(minn,tmp);
                sum+=tmp;
            }
        }
        if(minus_ct%2!=0)sum-=(2*minn);
        cout<<sum<<"\n";
    }
    return 0;
}