#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll h, m;
        cin>>h>>m;
        ll ans=((23-h)*60)+(60-m);
        cout<<ans<<endl;
    }
    return 0;
}