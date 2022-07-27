#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ck=0;
        if((n>=2)&&(n%2==0)){
            ll tmp=n/2;
            ll sq=sqrt(tmp);
            sq*=sq;
            if(sq==tmp)ck=1;
        }
        if(ck==0){
            if((n>=4)&&(n%4==0)){
                ll tmp=n/4;
                ll sq=sqrt(tmp);
                sq*=sq;
                if(sq==tmp)ck=1;
            }
        }
        if(ck==0)cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}