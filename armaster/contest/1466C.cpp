///Problem No: C
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        ll len=s.size();
        ll ct=0;
        for(ll i=1;i<len;i++){
            if(s[i]==s[i-1]){
                s[i]='#';
                ct++;
                continue;
            }
            if(i!=1){
                if(s[i]==s[i-2]){
                    s[i]='#';
                    ct++;
                    continue;
                }
            }
        }
        cout<<ct<<"\n";
    }
    return 0;
}