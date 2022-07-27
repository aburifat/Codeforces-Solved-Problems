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
        ll sum=0;
        for(ll i=0;i<n;i++){
            if(s[i]=='*')sum++;
        }
        ll st=0;
        ll ct=0;
        ll ans=0;
        for(ll i=0;i<n; i++){
            //cout<<s[i]<<endl;
            if(s[i]=='.')ct++;
            else{
                if(ct!=0){
                    ll tmp=min(st,sum-st);
                    ans+=(tmp*ct);
                    //cout<<"ck : "<<i<<" "<<ct<<" "<<tmp<<endl;
                    ct=0;
                }
                st++;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}