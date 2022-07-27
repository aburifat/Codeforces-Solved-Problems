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
    map<char,ll>mp;
    ll len=s.size();
    for(ll i=0;i<len;i++){
        mp[s[i]]++;
    }
    string a="",b="";
    for(ll i=0;i<26;i++){
        char c='a';
        c+=i;
        if(mp[c]==2){
            a+=c;
            mp[c]=0;
        }else if(mp[c]==1){
            b+=c;
            mp[c]=0;
        }
    }
    cout<<a<<a<<b<<"\n";
    }
    return 0;
}