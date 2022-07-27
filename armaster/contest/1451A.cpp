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
        ll ans;
        cin>>n;
        if(n==1)ans=0;
        else if(n==2)ans=1;
        else if(n==3)ans=2;
        else{
            if(n%2==0)ans=2;
            else ans=3;
        }
        cout<<ans<<"\n";
    }
    return 0;
}