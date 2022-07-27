#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main()
{
    ll t;
    cin>>t;
    ll n, m;
    for(ll T=1;T<=t;T++){
        cin>>n>>m;
        ll ck=(n%m);
        if(!ck)cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
    return 0;
}