#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int main()
{
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll len=s.size();
        ll ck=0,idx=-1;
        for(ll i=len-1;i>0;i--){
            ll tmp=(s[i]-'0')+(s[i-1]-'0');
            if(tmp>9){
                ck=1;
                idx=i;
                break;
            }
        }
        if(ck!=1){
            idx=1;
        }
        for(ll i=0;i<len;i++){
            if((i+1)==idx){
                ll val=(s[idx]-'0')+(s[idx-1]-'0');
                cout<<val;
                i++;
            }else{
                cout<<s[i];
            }
        }
        cout<<"\n";
    }
    return 0;
}