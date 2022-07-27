#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n;
    cin>>n;
    ll ct=(3*n+4);
    cout<<ct<<"\n";
    ct=0;
    for(ll i=0;i<=(n+1);i++)cout<<i<<" "<<i<<"\n";
    for(ll i=1,j=0;i<=(n+1);i++,j++)cout<<i<<" "<<j<<"\n";
    for(ll i=0,j=1;i<=n;i++,j++)cout<<i<<" "<<j<<"\n";
    return 0;
}