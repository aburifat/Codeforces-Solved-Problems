#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    ll n, x;
    while(t--)
    {
        cin>>n>>x;
        ll u,v,ctx=0;
        for(ll i=0;i<(n-1);i++){
            cin>>u>>v;
            if(u==x||v==x)ctx++;
        }
        ll ck=0;
        if(ctx<=1)ck=1;
        else if(n%2==0)ck=1;
        if(ck)cout<<"Ayush\n";
        else cout<<"Ashish\n";
    }
    return 0;
}