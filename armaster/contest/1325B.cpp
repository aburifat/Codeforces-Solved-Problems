#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MX 100009

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll t;
    cin>>t;
    //t=1;
    for(ll T=1; T<=t; T++)
    {
        ll n;
        cin>>n;
        map<ll,ll>m;
        ll ct=0;
        for(ll i=0; i<n; i++)
        {
            ll tmp;
            cin>>tmp;
            if(m[tmp]==0){
                m[tmp]++;
                ct++;
            }
        }
        cout<<ct<<endl;
    }
    return 0;
}