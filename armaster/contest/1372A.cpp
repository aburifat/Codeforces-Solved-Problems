#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll n;
    while(t--){
        cin>>n;
        ll ck=0;
        for(ll i=1;i<1000;i+=2){
            if(n<=0)break;
            if(!ck)ck++;
            else cout<<" ";
            cout<<i;
            n--;
        }
        for(ll i=1;i<1000;i+=2){
            if(n<=0)break;
            if(!ck)ck++;
            else cout<<" ";
            cout<<i;
            n--;
        }
        cout<<"\n";
    }
    return 0;
}