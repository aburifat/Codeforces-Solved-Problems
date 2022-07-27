#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    string s;
    while(t--) {
        cin>>s;
        ll n=s.size();
        ll ct[10];
        for(ll i=0;i<10;i++)ct[i]=0;
        for(ll i=0;i<n;i++){
            ct[s[i]-'0']++;
        }
        ll  ans=0;
        for(ll i=0;i<10;i++){
            ans=max(ans,ct[i]);
        }
        for(ll i=0;i<10;i++){
            for(ll j=0;j<10;j++){
                ll tmp=0;
                bool party=false;
                for(ll k=0;k<n;k++){
                    if(party==false&&(s[k]-'0')==i)tmp++,party=true;
                    else if(party==true&&(s[k]-'0')==j)tmp++,party=false;
                }
                if(tmp&1)tmp--;
                ans=max(ans,tmp);
            }
        }
        cout<<n-ans<<"\n";
    }
    return 0;
}