#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll a, b, n;
    while(t--){
        cin>>a>>b>>n;
        if(a>n||b>n)cout<<"0\n";
        else{
            ll ct=0;
            ll tmp;
            while(1){
                tmp=a+b;
                ct++;
                if(tmp>n)break;
                b=max(a,b);
                a=tmp;
            }
            cout<<ct<<"\n";
        }
    }
    return 0;
}

/*

*/