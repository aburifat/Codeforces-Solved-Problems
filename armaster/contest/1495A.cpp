#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

double getLen(ll a, ll b)
{
    double val=(a*a)+(b*b);
    val=sqrt(val);
    return val;
}

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>m,d;
        ll x,y;
        for(ll i=0;i<(2*n);i++){
            cin>>x>>y;
            if(x==0)m.push_back(abs(y));
            else d.push_back(abs(x));
        }
        sort(m.begin(),m.end());
        sort(d.begin(),d.end());
        double ans=0;
        for(ll i=0;i<n;i++){
            double tmp=getLen(m[i],d[i]);
            ans+=tmp;
        }
        cout<<fixed<<setprecision(15)<<ans<<"\n";
    }
    return 0;
}