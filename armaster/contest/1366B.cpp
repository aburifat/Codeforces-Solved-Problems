#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll n, x, m;
    while(t--)
    {
        cin>>n>>x>>m;
        ll l, r;
        ll mn=x,mx=x;
        //cout<<"aa : "<<mn<<" "<<mx<<endl;
        for(ll i=0;i<m;i++){
            cin>>l>>r;
            if((mn>=l&&mn<=r)||(mx>=l&&mx<=r)){
                mn=min(mn,l);
                mx=max(mx,r);
            }
            //cout<<"bb : "<<mn<<" "<<mx<<endl;
        }
        ll ans=mx-mn+1;
        cout<<ans<<"\n";
    }
    return 0;
}