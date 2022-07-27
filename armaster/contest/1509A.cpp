
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    //ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t=1;
    cin>>t;
    ll n;
    for(ll T=1;T<=t;T++){
        cin>>n;
        ll arr[n+5];
        for(ll i=0;i<n; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll ck=0;
        for(ll i=n-1;i>=0;i--){
            if(arr[i]%2==1){
                if(ck==0)ck++;
                else cout<<" ";
                cout<<arr[i];
            }

        }
        for(ll i=n-1;i>=0;i--){
            if(arr[i]%2==0){
                if(ck==0)ck++;
                else cout<<" ";
                cout<<arr[i];
            }

        }
        cout<<"\n";
    }
    return 0;
}