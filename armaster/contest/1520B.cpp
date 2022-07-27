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
        ll ct=0;
        for(ll i=1;i<=9;i++){
            ll val=i;
            while(val<=n){
                ct++;
                val*=10;
                val+=i;
            }
        }
        cout<<ct<<endl;
    }
    return 0;
}