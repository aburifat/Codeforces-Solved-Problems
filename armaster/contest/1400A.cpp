#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll n;
    string s,ans="";
    while(t--){
        ans="";
        cin>>n;
        cin>>s;
        ll arr[n+3];
        ll idx=0;
        for(ll i=0;i<(2*n-1);i+=2){
            ans+=s[i];
        }
        cout<<ans<<"\n";
    }
    return 0;
}