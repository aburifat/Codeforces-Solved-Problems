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
        ll val=n*2;
        val+=2;
        for(ll i=0;i<n;i++){
            if(i!=0)cout<<" ";
            cout<<val;
            val+=2;
        }
        cout<<"\n";
    }
    return 0;
}