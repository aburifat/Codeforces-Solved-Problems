#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll a, b;
    while(t--){
        cin>>a>>b;
        ll tmp=0;
        if(a<b)swap(a,b);
        if(a==b){
            ll ans=0;
            ans+=((a/3)*2);
            if(a%3==2)ans++;
            cout<<ans<<"\n";
            continue;
        }
        ll ans=0;
        ll dif=a-b;
        if(a>=(dif*2)&&b>=dif){
            ans+=(dif);
            a-=(dif*2);
            b-=dif;
            ans+=((a/3)*2);
            if(a%3==2)ans++;
            cout<<ans<<"\n";
        }else{
            ans=min((a/2),b);
            a-=(ans*2);
            b-=ans;
            if(a>=2&&b>=1)ans++;
            else if(a>=1&&b>=2)ans++;
            cout<<ans<<"\n";
        }
    }
    return 0;
}