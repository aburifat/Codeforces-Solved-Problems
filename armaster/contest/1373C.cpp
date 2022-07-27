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
        ll len=s.size();
        ll ans=len;
        ll curr=0;
        map<ll,ll>mp;
        for(ll i=0;i<len;i++){
            if(s[i]=='-')curr--;
            else curr++;
            if(curr<0){
                if(mp[curr]==0){
                    mp[curr]=1;
                    ans+=(i+1);
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}