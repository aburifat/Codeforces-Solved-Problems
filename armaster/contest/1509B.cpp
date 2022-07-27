

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    //ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t=1;
    cin>>t;
    ll n;
    for(ll T=1;T<=t;T++){
        cin>>n;
        string s;
        cin>>s;
        n=s.size();
        ll ct[]={0,0};
        ll ck=0;
        ll t=0,m=0;
        for(ll i=0;i<n;i++){
            if(s[i]=='T')t++;
            else if(s[i]=='M')m++;
        }
        if((2*m)!=t){
            cout<<"NO\n";
            continue;
        }
        t/=2;
        for(ll i=0;i<n;i++){
            if(s[i]=='M'){
                if(ct[0]<=0){
                    ck=1;
                    break;
                }else{
                    ct[0]--;
                    ct[1]++;
                    m--;
                }
            }else if(s[i]=='T'){
                if(t>0){
                    ct[0]++;
                    t--;
                }else{
                    if(ct[1]>0){
                        ct[1]--;
                    }else{
                        ck=1;
                        break;
                    }
                }
            }
        }
        if((ck!=0)||(ct[0]!=0)||(ct[1]!=0))cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}