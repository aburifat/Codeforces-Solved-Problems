#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll tmp;
        vector<ll>v;
        for(ll i=0;i<n;i++){
            cin>>tmp;
            v.push_back(tmp);
        }
        ll val=v[0];
        ll ck=0;
        for(ll i=0;i<n-1;i++){
            if(i!=0)val=val^v[i];
            ll tmp;
            for(ll j=i+1;j<n;j++){
                if(j==i+1)tmp=v[j];
                else tmp=tmp^v[j];
                if(tmp==val){
                    if(j+1<n){
                        tmp=v[j+1];
                        j++;
                    }
                }
            }
            if(tmp==val){
                //cout<<"What "<<i<<endl;
                ck=1;
                break;
            }
        }
        if(ck==1)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}