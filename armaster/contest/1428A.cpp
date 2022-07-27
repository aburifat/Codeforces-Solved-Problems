#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll sx,sy,ex,ey;
    while(t--){
        cin>>sx>>sy>>ex>>ey;
        ll difx=abs(sx-ex);
        ll dify=abs(sy-ey);
        ll ans=difx+dify;
        if(difx&&dify)ans+=2;
        cout<<ans<<"\n";
    }
    return 0;
}