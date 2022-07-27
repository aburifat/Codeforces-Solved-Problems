#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll len=s.size();
        ll ct=0;
        string rev="";
        for(ll i=len-1;i>=0;i--){
            rev+=s[i];
            if(s[i]=='a')ct++;
        }
        if(ct==len)cout<<"NO\n";
        else{
            cout<<"YES\n";
            if(s==rev){
                cout<<s<<"a"<<endl;
            }else{
                ll idx=0;
                for(ll i=0;i<len;i++){
                    if(s[i]!='a'){
                        idx=len-i;
                        break;
                    }
                }
                for(ll i=0;i<len;i++){
                    if(i==idx)cout<<"a";
                    cout<<s[i];
                }
                if(idx==len)cout<<"a";
                cout<<"\n";
            }
        }
    }
    return 0;
}