#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll dx[]= {0,0,1,-1};
ll dy[]= {1,-1,0,0};

constexpr ll MX=10000000000;

ll n, m;
ll dp[505][505][25],xarr[505][505],yarr[505][505],ans[505][505];

void init()
{
    for(ll i=0;i<505;i++){
        for(ll j=0;j<505;j++){
            ans[i][j]=-1;
            for(ll k=0;k<25;k++){
                dp[i][j][k]=-1;
            }
        }
    }
}

ll ctdp(ll ix, ll iy, ll val)
{
    if(val<=0)return 0;
    //if(ix<0||ix>=n||iy<0||iy>=m)return 0;
    if(dp[ix][iy][val]!=-1)return dp[ix][iy][val];
    ll tmp=MX;
    for(ll i=0;i<4;i++){
        ll tmpix=ix+dx[i];
        ll tmpiy=iy+dy[i];
        if(tmpix<0||tmpix>=n||tmpiy<0||tmpiy>=m)continue;
        ll addval;
        if(i==0)addval=xarr[ix][iy];
        else if(i==1)addval=xarr[tmpix][tmpiy];
        else if(i==2)addval=yarr[ix][iy];
        else addval=yarr[tmpix][tmpiy];
        tmp=min(tmp,addval+ctdp(tmpix,tmpiy,val-1));
    }
    //cout<<"Val :: "<<val<<" "<<tmp<<"\n";
    //ll ck;
    //cin>>ck;
    return dp[ix][iy][val]=tmp;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    init();
    ll k;
    cin>>n>>m>>k;
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<(m-1); j++)cin>>xarr[i][j];
    }
    for(ll i=0; i<(n-1); i++)
    {
        for(ll j=0; j<m; j++)cin>>yarr[i][j];
    }
    if(k%2==0)
    {
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                ans[i][j]=ctdp(i,j,(ll)(k/2));
                if(ans[i][j]==MX)ans[i][j]=-1;
                else ans[i][j]*=2;
            }
        }
    }
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            if(j!=0)cout<<" ";
            cout<<ans[i][j];
        }
        cout<<"\n";
    }

    return 0;
}