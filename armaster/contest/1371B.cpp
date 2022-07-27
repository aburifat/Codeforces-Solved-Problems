#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll n, r;
    while(t--)
    {
        cin>>n>>r;
        ll ans=1,ex=0;
        if(r>=n){
            ex=1;
            r=n-1;
        }
        if(r%2==0){
            ans*=(r/2);
            ans*=(r+1);
        }else{
            ans*=r;
            ans*=((r+1)/2);
        }
        ans+=ex;
        cout<<ans<<"\n";

    }
    return 0;
}