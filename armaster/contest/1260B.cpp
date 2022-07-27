#include<bits/stdc++.h>
using namespace std;

#define ll long long



int main()
{
    ll t;
    cin>>t;
    for(ll T=1; T<=t; T++)
    {
        ll a, b,tmp;
        cin>>a>>b;
        if(a>b)swap(a,b);
        ll diff =b-a;
        if(diff>a){
            cout<<"NO"<<endl;
            continue;
        }else if(diff==a){
            cout<<"YES"<<endl;
            continue;
        }
        a-=diff;
        b-=(diff*2);
        if(a%3==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}