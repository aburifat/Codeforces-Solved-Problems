#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t=1;
    //cin>>t;
    for(ll T=1;T<=t;T++){
        ll n;
        cin>>n;
        vector<pair<ll,ll> >points;
        for(ll i=0;i<n;i++){
            ll x,y;
            cin>>x>>y;
            points.push_back({x,y});
        }
        //map<pair<double,double>,ll>mp;
        vector<pair<double,double> >midles;
        ll midx,midy;
        pair<double,double>pr;
        for(ll i=0;i<n-1;i++){
            for(ll j=i+1;j<n;j++){
                ll ck1=0,ck2=0;
                midx=points[i].first+points[j].first;
                if(midx%2!=0)ck1=1;
                midx/=2;
                midy=points[i].second+points[j].second;
                if(midy%2!=0)ck2=1;
                midy/=2;
                pr={midx,midy};
                if(ck1!=0)pr.first+=0.5;
                if(ck2!=0)pr.second+=0.5;
                midles.push_back(pr);
            }
        }
        sort(midles.begin(),midles.end());
        ll len=midles.size(); 
        ll ans=0;
        ll ct=0;
        if(len>0)pr=midles[0];
        else goto prnt;
        for(ll i=0;i<len;i++){
            if(midles[i]==pr)ct++;
            else{
                if(ct>1){
                    ll val=ct*(ct-1);
                    val/=2;
                    ans+=val;
                }
                ct=1;
                pr=midles[i];
            }
            if(i==(len-1)){
                if(ct>1){
                    ll val=ct*(ct-1);
                    val/=2;
                    ans+=val;
                }
            }
        }
prnt:
        //cout<<"Case "<<T<<": ";
        cout<<ans<<"\n";
    }
    return 0;
}