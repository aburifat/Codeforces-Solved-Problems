#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll a, b;
    while(t--){
        cin>>a>>b;
        ll mn=min(a,b);
        ll mx=max(a,b);
        if(mx%mn==0)mx/=mn;
        else{
            cout<<"-1\n";
            continue;
        }
        //cout<<"Hi\n";
        ll ct=0;
        if(mx==1){
            cout<<"0\n";
            continue;
        }
        while(mx%8==0&&mx>0){
            mx/=8;
            ct++;
        }
        while(mx%4==0&&mx>0){
            mx/=4;
            ct++;
        }
        while(mx%2==0&&mx>0){
            mx/=2;
            ct++;
        }
        if(mx!=1)cout<<"-1\n";
        else cout<<ct<<"\n";
    }
    return 0;
}