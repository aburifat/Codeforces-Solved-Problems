#include<bits/stdc++.h>
using namespace std;
typedef int ll;

constexpr ll N=5009;

char a[N], b[N];

ll val[N][N];

int main() {
    ll n, m;
    cin>>n>>m;
    cin>>(a+1);
    cin>>(b+1);
    ll ans=0;
    for(ll i=0;i<=n;i++){
        for(ll j=0;j<=m;j++){
            val[i][j]=0;
            if(i&&j&&a[i]==b[j])val[i][j]=max(val[i][j],val[i-1][j-1]+2);
            if(i)val[i][j]=max(val[i][j],val[i-1][j]-1);
            if(j)val[i][j]=max(val[i][j],val[i][j-1]-1);
            ans=max(ans,val[i][j]);
        }
    }
    cout<<ans<<"\n";
    return 0;
}