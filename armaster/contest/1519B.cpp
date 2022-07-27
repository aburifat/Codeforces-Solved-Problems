#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll n, m, k;
    while(t--){
        cin>>n>>m>>k;
        ll mn=min(n,m);
        ll mx=max(n,m);
        ll dif=mx-mn;
        ll ans1=(mn*(mn-1));
        ans1+=(mn*dif);
        ll ans2=((mx*(mn-1))+(mx-1));
        if(k==ans2)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}