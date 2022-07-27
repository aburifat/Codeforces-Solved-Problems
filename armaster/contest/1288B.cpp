#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    for(ll T=0; T<t; T++){
        ll a, b;
        ll ct=0;
        cin>>a>>b;
        if(b>=999999999){
            ct=9;
        }else if(b>=99999999){
            ct=8;
        }else if(b>=9999999){
            ct=7;
        }else if(b>=999999){
            ct=6;
        }else if(b>=99999){
            ct=5;
        }else if(b>=9999){
            ct=4;
        }else if(b>=999){
            ct=3;
        }else if(b>=99){
            ct=2;
        }else if(b>=9){
            ct=1;
        }
        cout<<(a*ct)<<endl;
    }
    return 0;
}