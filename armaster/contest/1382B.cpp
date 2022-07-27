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
        ll one=0;
        ll win=1;
        ll ck=0;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            if(!ck){
                if(arr[i]==1)one++;
                else ck=1;
            }
        }
        if(one==n){
            if(one%2==0)win=2;
        }
        else if(one&&one%2!=0)win=2;
        if(win==1)cout<<"First\n";
        else cout<<"Second\n";
    }
    return 0;
}