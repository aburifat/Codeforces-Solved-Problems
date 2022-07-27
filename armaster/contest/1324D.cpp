#include<bits/stdc++.h>
using namespace std;
#define ll long long


vector<ll>v;
ll a[200009],b[200009];


int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll n;
    cin>>n;
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(ll i=0; i<n; i++)
    {
        cin>>b[i];
    }
    for(ll i=0; i<n; i++)
    {
        ll tmp=a[i]-b[i];
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    ll len=v.size();
    if(v[len-1]<=0){
        cout<<"0"<<endl;
    }else{
        ll zeroIdx=upper_bound(v.begin(),v.end(),0)-v.begin();
        ll zero=len-zeroIdx;
        ll ans=0;
        if(zero>=2){
            ans=zero;
            ans*=(zero-1);
            ans/=2;
        }
        for(ll i=0; i<n; i++)
        {
            if(v[i]>0)break;
            ll val=(-1)*v[i];
            val++;
            ll idx=lower_bound(v.begin(),v.end(),val)-v.begin();
            ans+=(len-idx);
        }
        cout<<ans<<endl;
    }
    return 0;
}