#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define dbg(a) cout<<#a" = "<<a<<"\n"

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll n;
    while(t--){
        cin>>n;
        ll bal=n/4;
        if(n%4)bal++;
        bal=max((ll)1,bal);
        for(ll i=0;i<(n-bal);i++){
            cout<<"9";
        }
        for(ll i=0;i<bal;i++){
            cout<<"8";
        }
        cout<<"\n";
    }
    return 0;
}