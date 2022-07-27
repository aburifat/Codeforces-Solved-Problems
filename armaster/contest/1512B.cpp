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
        string arr[n+5];
        for(ll i=0;i<n; i++){
            cin>>arr[i];
        }
        vector<pair<ll,ll> >pt;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                if(arr[i][j]=='*')pt.push_back({i,j});
            }
        }
        ll i1,i2,j1,j2;
        if(pt[0].first!=pt[1].first){
            if(pt[0].second!=pt[1].second){
                i1=pt[0].first;
                j1=pt[1].second;
                i2=pt[1].first;
                j2=pt[0].second;
            }else{
                i1=pt[0].first;
                i2=pt[1].first;
                ll j=pt[0].second;
                j--;
                if(j<0)j+=2;
                j1=j;j2=j;
            }
        }else{
            j1=pt[0].second;
            j2=pt[1].second;
            ll i=pt[0].first;
            i--;
            if(i<0)i+=2;
            i1=i;i2=i;
        }
        arr[i1][j1]=arr[i2][j2]='*';
        for(ll i=0;i<n;i++){
            cout<<arr[i]<<"\n";
        }
    }
    return 0;
}