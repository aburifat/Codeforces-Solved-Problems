#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll n;
    while(t--){
        cin>>n;
        ll arr[n+3];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            if(i%2==0&&arr[i]<0)arr[i]*=(-1);
            else if(i%2==1&&arr[i]>0)arr[i]*=(-1);
        }
        for(ll i=0;i<n;i++){
            cout<<arr[i];
            if(i!=n-1)cout<<" ";
            else cout<<"\n";
        }
    }
    return 0;
}