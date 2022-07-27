#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        n=s.size();
        map<ll,ll>mp;
        mp[(s[0]-'A')]++;
        ll ck=0;
        for(ll i=1;i<n;i++){
            if(s[i-1]!=s[i]){
                if(mp[(s[i]-'A')]==0){
                    mp[(s[i]-'A')]++;
                }else{
                    ck=1;
                    break;
                }
            }
        }
        if(ck==0)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}