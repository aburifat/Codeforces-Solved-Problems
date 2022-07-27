#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mem[100009][7][2];
ll arr[100009];

ll n, k, z;


ll dp(ll pos, ll moves, ll lft, bool last)
{
    if(lft>z)return INT_MIN;
    if(moves==k)return arr[pos];
    if(mem[moves][lft][last]!=-1)return mem[moves][lft][last];
    ll ans=INT_MIN;
    ans=dp(pos+1,moves+1,lft, false)+arr[pos];
    if(pos>0&&last==false)ans=max(ans,dp(pos-1,moves+1,lft+1,true)+arr[pos]);
    return mem[moves][lft][last]=ans;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        cin>>n>>k>>z;
        for(ll i=0; i<n; i++){
            cin>>arr[i];
        }
        for(ll i=0;i<=k;i++){
            for(ll j=0;j<=z;j++){
                for(ll p=0;p<2;p++){
                    mem[i][j][p]=-1;
                }
            }
        }
        ll ans=dp(0,0,0,0);
        cout<<ans<<"\n";
    }
    return 0;
}