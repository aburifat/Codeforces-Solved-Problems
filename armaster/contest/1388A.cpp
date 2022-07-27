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
        if(n>30){
            ll val=n-30;
            ll a=6,b=10,c=14;
            if(val==a||val==b||val==c){
                val--;
                c++;
            }
            cout<<"YES\n";
            cout<<"6 10 "<<c<<" "<<val<<"\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}