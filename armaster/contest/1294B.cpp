#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pub push_back
#define all(v) v.begin(),v.end()
#define F first
#define S second

int main()
{
    ll t;
    cin>>t;
    while(t--){
        vector<pair<ll,ll> >v;
        v.push_back(make_pair(0,0));
        ll n;
        cin>>n;
        for(ll i=0; i<n; i++){
            ll x,y;
            cin>>x>>y;
            v.push_back(make_pair(x,y));
        }
        sort(all(v));
        string s="";
        ll ck=0;
        for(ll i=0; i<n ; i++){
            if(v[i].S<=v[i+1].S){
                for(ll j=0; j<(v[i+1].F-v[i].F); j++){
                    s+="R";
                }
                for(ll j=0; j<(v[i+1].S-v[i].S); j++){
                    s+="U";
                }
            }else{
                cout<<"NO"<<endl;
                ck=1;
                break;
            }
        }
        if(ck==0){
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }
    }
    return 0;
}