#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    ll n, k;
    string s;
    while(t--) {
        cin>>n>>k;
        cin>>s;
        ll ans=0;
        ll ct=0;
        ll one=0;
        for(ll i=0; i<n; i++) {
            if(s[i]=='1') {
                one++;
                break;
            }
            ct++;
        }
        //cout<<"one :: "<<ct<<endl;
        if(ct<n&&ct>0) {
            ct=ct-k;
        }
        if(ct>0){
            ans+=(ct/(k+1));
            if(ct%(k+1)!=0)
                ans++;
        }
        ct=0;
        if(one) {
            for(ll i=(n-1); i>=0; i--) {
                if(s[i]=='1')
                    break;
                ct++;
            }
            if(ct<n&&ct>0) {
                ct=ct-k;
            }
            if(ct>0){
                ans+=(ct/(k+1));
                if(ct%(k+1)!=0)
                    ans++;
            }
        }
        ll ck=0;
        ll prev;
        for(ll i=0;i<n;i++){
            if(s[i]=='1'){
                if(!ck){
                    ck++;
                    prev=i;
                }
                else{
                    ll tmp=i-prev;
                    prev=i;
                    tmp-=(k+1);
                    //cout<<"tmp:iprev :: "<<tmp<<" "<<i<<" "<<prev<<"\n";
                    if(tmp>0){
                        ans+=(tmp/(k+1));
                    }
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}


/*
6
6 1
100010
6 2
000000
5 1
10101
3 1
001
2 2
00
1 1
0
*/