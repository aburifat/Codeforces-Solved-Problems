#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll l,r;
    while(t--){
        cin>>l>>r;
        if(abs(r-l)<l)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}