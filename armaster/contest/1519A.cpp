#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll r,b,d;
    while(t--){
        cin>>r>>b>>d;
        if(r<b)swap(r,b);
        if(r==b)cout<<"YES\n";
        else{
            if(d==0){
                cout<<"NO\n";
                continue;
            }
            ll def=r-b;
            ll val=def/b;
            if(def%b!=0)val++;
            if(val>d)cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
    return 0;
}