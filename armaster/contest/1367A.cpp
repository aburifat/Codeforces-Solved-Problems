#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        string ans="";
        ll len=s.size();
        ans+=s[0];
        for(ll i=1;i<(len-1);i+=2){
            ans+=s[i];
        }
        ans+=s[len-1];
        cout<<ans<<"\n";
    }
    return 0;
}