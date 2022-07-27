#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

int main()
{
    fast;
    ll t;
    cin>>t;
    ll n;
    while(t--){
        cin>>n;
        ll three=0,two=0;
        while(n%3==0){
            n/=3;
            three++;
        }
        while(n%2==0){
            n/=2;
            two++;
        }
        if((n!=1)||(three<two)){
            cout<<"-1\n";
            continue;
        }else{
            ll dif=three-two;
            ll ans=(three+dif);
            cout<<ans<<"\n";
        }
    }
    return 0;
}