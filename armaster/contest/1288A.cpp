#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    for(ll T=0; T<t; T++){
        ll ck=0;
        ll n, d;
        cin>>n>>d;
        if(d<=n){
            cout<<"YES"<<endl;
            ck=1;
            continue;
        }else if(n<=1){
            cout<<"NO"<<endl;
            ck=1;
            continue;
        }
        for(ll i=n-1; i>1;i--){
            ll fsn=(d/i);
            if(d%i!=0){
                fsn++;
            }
            fsn+=(i-1);
            if(fsn<=n){
                cout<<"YES"<<endl;
                ck=1;
                break;
            }
        }
        if(ck==0){
            ck=1;
            cout<<"NO"<<endl;
        }
    }
    return 0;
}