#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<ll,ll>m;
vector<ll>v[5009];
ll arr[5009];

int main()
{
    ll t;
    cin>>t;

    for(ll T=1;T<=t; T++){

        ll e=0,o=0;
        ll n;
        cin>>n;
        m.clear();
        for(ll i=0; i<=n; i++){
            v[i].clear();
            arr[i]=0;
        }
        ll ck=0;
        for(ll i=0; i<n; i++)
        {
            cin>>arr[i];
            if(!m[arr[i]]){
                m[arr[i]]++;
            }else if(m[arr[i]]==1)
            {
                if(arr[i-1]!=arr[i]){
                    ck=1;
                }
                m[arr[i]]++;
            }else
            {
                ck=1;
            }
        }
        if(ck)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}