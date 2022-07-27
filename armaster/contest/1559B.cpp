#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    //ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        n=s.size();
        ll idx=n;
        ll ch=0;
        string wrd="BR";
        for(ll i=0;i<n;i++){
            if(s[i]!='?'){
                if(s[i]=='B'){
                    ch=1;
                }
                idx=i;
                break;
            }
        }
        if(idx>=n){
            for(ll i=0;i<n;i++){
                s[i]=wrd[ch];
                if(ch==0)ch=1;
                else ch=0;
            }
        }else{
            for(ll i=idx;i<n;i++){
                if(s[i]!='?'){
                    if(s[i]=='B'){
                        ch=1;
                    }else ch=0;
                }
                else{
                    s[i]=wrd[ch];
                    if(ch==0)ch=1;
                    else ch=0;
                }
            }
            for(ll i=n-1;i>=0;i--){
                if(s[i]!='?'){
                    if(s[i]=='B'){
                        ch=1;
                    }else ch=0;
                }
                else{
                    s[i]=wrd[ch];
                    if(ch==0)ch=1;
                    else ch=0;
                }
            }
        }
        cout<<s<<"\n";
    }
    return 0;
}