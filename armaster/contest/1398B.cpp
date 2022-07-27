#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define dbg(a) cout<<#a" = "<<a<<"\n"

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll n;
    string s;
    while(t--){
        cin>>s;
        n=s.size();
        vector<ll>ones;
        ll ct=0;
        for(ll i=0;i<n;i++){
            if(s[i]=='0'){
                ones.push_back(ct);
                ct=0;
            }else{
                ct++;
                if(i==n-1)ones.push_back(ct);
            }
        }
        sort(ones.begin(),ones.end());
        ll idx=0;
        for(ll i=0;i<n;i++){
            if(ones[i]!=0){
                idx=i;
                break;
            }
        }
        ll user[2];
        user[0]=0;
        user[1]=0;
        ll tg=0;
        ll len=ones.size();
        for(ll i=len-1;i>=idx;i--){
            user[tg]+=ones[i];
            if(tg==0)tg=1;
            else tg=0;
        }
        cout<<user[0]<<"\n";
    }
    return 0;
}