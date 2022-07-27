#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=2e5+5;
ll n;
ll a[N],cache[N][3][2];

ll dp(ll idx, ll cur, ll st)
{
    if(idx>=n){
        if(cur==1)return -1e18;
        return 0;
    }
    ll &ans=cache[idx][cur][st];
    if(ans!=-1)return ans;
    if(cur==0){
        ans=((idx%2==0)*a[idx])+dp(idx+1,cur,st);
        ans=max(ans,((idx%2)*a[idx])+dp(idx+1,1,idx%2));
    }else if(cur==1){
        ans=((idx%2)*a[idx])+dp(idx+1,cur,st);
        if(st!=(idx%2))ans=max(ans,((idx%2)*a[idx])+dp(idx+1,2,idx%2));
    }else ans=((idx%2==0)*a[idx])+dp(idx+1,cur,st);
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        cin>>n;
        for(ll i=0;i<n;i++)cin>>a[i];
        for(ll i=0;i<=n;i++)
            for(ll j=0;j<=2;j++)
                for(ll k=0;k<=1;k++)
                    cache[i][j][k]=-1;
        ll o=dp(0,0,0);
        cout<<o<<"\n";
    }
    return 0;
}

/*
4
8
1 7 3 4 7 6 2 9
5
1 2 1 2 1
10
7 8 4 5 7 6 8 9 7 3
4
3 1 2 1
*/