#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t=1;
    cin>>t;
    ll n,k;
    for(ll T=1;T<=t;T++){
        //ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
        cin>>n>>k;
        ll tmp=n-2;
        if(tmp<0)tmp=0;
        ll dv=tmp/2;
        ll rm=tmp%2;
        tmp=dv+rm;
        //cout<<tmp<<"\n";
        if(k>tmp){
            cout<<"-1\n";
        }else{
            ll arr[n+5];
            for(ll i=0;i<n;i++)arr[i]=0;
            ll num=n;
            ll ct=0;
            for(ll i=1;i<n;i+=2){
                if(ct==k)break;
                arr[i]=num;
                num--;
                ct++;
            }
            for(ll i=n-1;i>=0;i--){
                if(arr[i]!=0)continue;
                arr[i]=num;
                num--;
            }
            for(ll i=0;i<n; i++){
                if(i!=0)cout<<" ";
                cout<<arr[i];
            }
            cout<<"\n";
        }
    }
    return 0;
}