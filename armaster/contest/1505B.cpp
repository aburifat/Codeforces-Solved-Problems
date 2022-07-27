#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    while(cin>>n){
        ll ans=n;
        while(n>=10){
            ans=0;
            while(n>0){
                ans+=(n%10);
                n/=10;
            }
            n=ans;
        }
        cout<<ans<<"\n";
    }
    return 0;
}