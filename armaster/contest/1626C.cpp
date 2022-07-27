#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>time,health,till;
        ll idx=0;
        for(ll i=0;i<n;i++){
            ll tmp;
            cin>>tmp;
            time.push_back(tmp);
        }
        for(ll i=0;i<n;i++){
            ll tmp;
            cin>>tmp;
            health.push_back(tmp);
        }
        for(ll i=n-1;i>0;i--){
            ll interval=time[i]-time[i-1];
            if((health[i]>health[i-1])&&(health[i]>=interval)){
                ll tst=health[i]-interval;
                if(health[i-1]<tst)health[i-1]=tst;
            }
            if(i==0)break;
        }
        till.push_back(health[0]);
        //Problem here
        for(ll i=1;i<n;i++){
            ll interval=time[i]-time[i-1];
            if(interval<health[i]){
                till[idx]+=interval;
            }else{
                till.push_back(health[i]);
                idx++;
            }
        }
        //Problem end here
        ll len=till.size();
        /*
        cout<<"Till : ";
        for(ll i=0;i<len;i++){
            cout<<till[i]<<" ";
        }cout<<endl;
        */
        ll ans=0;
        for(ll i=0;i<len;i++){
            ll val=till[i];
            if(val%2==0){
                val/=2;
                val*=(till[i]+1);
            }else{
                ll what=till[i]+1;
                what/=2;
                val*=what;
            }
            ans+=val;
        }
        cout<<ans<<"\n";
    }
    return 0;
}