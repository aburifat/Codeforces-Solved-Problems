#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

inline ll calOne(ll n, ll m, ll x)
{
    string s;
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        cin>>s;
        for(ll j=0;j<m;j++)
        {
            if(s[j]=='.')ans+=x;
        }
    }
    return ans;
}

inline ll calTwo(ll n, ll m, ll x, ll y)
{
    string s;
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        cin>>s;
        ll ct=0;
        for(ll j=0; j<m;j++)
        {
            if(j==0)ct=0;
            if(s[j]=='.'){
                ct++;
                if(j==(m-1)){
                    ans+=(((ct/2)*y)+(ct%2!=0)*x);
                    ct=0;
                }
            }else{
                ans+=(((ct/2)*y)+(ct%2!=0)*x);
                ct=0;
            }
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll n, m, x, y;
    while(t--)
    {
        cin>>n>>m>>x>>y;
        ll ans;
        if((x*2)<=y){
            ans=calOne(n,m,x);
        }else{
            ans=calTwo(n,m,x,y);
        }
        cout<<ans<<"\n";
    }
    return 0;
}

/*
4
1 1 10 1
.
1 2 10 1
..
2 1 10 1
.
.
3 3 3 7
..*
*..
.*.

output:
10
1
20
18
*/