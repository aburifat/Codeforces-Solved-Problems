#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    map<ll,ll>g,r;
    queue<ll>give,recive;
    ll n;
    cin>>n;
    for(ll i=1; i<=n; i++){
        ll tmp;
        cin>>tmp;
        if(tmp!=0){
            g[i]=tmp;
            r[tmp]=i;
        }
    }
    map<ll,ll>mark;
    for(ll i=1; i<=n; i++){
        if(r[i]==0&&g[i]==0){
            recive.push(i);
            give.push(i);
            mark[i]=1;
        }
    }
    for(ll i=1; i<=n; i++){
        if((mark[i]==0)&&(r[i]==0)){
            recive.push(i);
        }
        if((mark[i]==0)&&(g[i]==0)){
            give.push(i);
        }
    }
    while(!give.empty()){
        ll gg=give.front();
        give.pop();
        ll rr=recive.front();
        recive.pop();
        if(rr==gg){
            recive.push(rr);
            rr=recive.front();
            recive.pop();
        }
        g[gg]=rr;
        r[rr]=gg;
    }
    for(ll i=1; i<=n; i++){
        cout<<g[i];
        if(i==n){
            cout<<endl;
        }else{
            cout<<" ";
        }
    }
    return 0;
}