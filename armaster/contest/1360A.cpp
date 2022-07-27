#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    ll a, b;
    ll x, y;
    ll ans;
    while(t--){
        cin>>a>>b;
        x=min(a,b);
        y=max(a,b);
        x*=2;
        ans=(x>y)?x*x:y*y;
        cout<<ans<<endl;
    }
    return 0;
}