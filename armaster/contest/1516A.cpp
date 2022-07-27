#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll arr[n+5];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        for(ll i=0;i<n;i++){
            if(k>0){
                ll val=min(k,arr[i]);
                arr[i]-=val;
                arr[n-1]+=val;
                k-=val;
            }else{
                break;
            }
        }
        for(ll i=0;i<n; i++){
            if(i!=0)cout<<" ";
            cout<<arr[i];
        }
        cout<<endl;
    }
    return 0;
}