#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main()
{
    ll t;
    cin>>t;
    ll n;
    for(ll T=1;T<=t;T++){
        cin>>n;
        ll ck=(n%4);
        if(!ck)cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
    return 0;
}