#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin>>t;
    for(ll T=0; T<t; T++){
        ll r, b, k;
        cin>>r>>b>>k;
        if(r>b)swap(r,b);
        ll tp=((r/__gcd(r,b))*b);
        ll ck1=(b-1)/r;
        ll ck2=(tp-1)/r;
        ll ck=tp/b;
        ll ct;
        if(ck*ck1<ck2)ct=ck1+1;
        else ct=ck1;
        if(ct<k)cout<<"OBEY"<<endl;
        else cout<<"REBEL"<<endl;
    }
    return 0;
}