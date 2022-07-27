///Problem No: B

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll n,x;
    while(t--)
    {
        cin>>n>>x;
        ll sum=0;
        ll arr[n+3],ct[n+3];
        ll mxct=LONG_MAX;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            ct[i]=0;
            ll tmp=arr[i];
            while(tmp%x==0){
                tmp/=x;
                ct[i]++;
            }
        }
        //cout<<ct[0]<<" ";
        for(ll i=1;i<n;i++){
            if(ct[i]>ct[i-1])ct[i]=ct[i-1];
            //cout<<ct[i]<<" ";
        }
        ll sto=ct[n-1];
        for(ll i=n-1;i>=0;i--){
            if(sto<ct[i])ct[i]=sto+1;
        }
        //cout<<endl;
        for(ll i=0;i<n; i++){
            sum+=((ct[i]+1)*arr[i]);
        }
        cout<<sum<<endl;
    }
    return 0;
}