#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;

    for(ll T=1;T<=t; T++){
        ll e=0,o=0;
        ll n;
        cin>>n;
        for(ll i=0; i<n; i++)
        {
            ll tmp;
            cin>>tmp;
            if(tmp%2==0){
                e++;
            }else{
                o++;
            }
        }
        if(e==0||o==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}