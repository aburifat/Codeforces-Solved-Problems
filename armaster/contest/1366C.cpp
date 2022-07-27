#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll n, m;
    while(t--){
        cin>>n>>m;
        vector<ll>ones,zeros;
        ll arr[n+1][m+1];
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        for(ll i=0;i<(n+m-1);i++){
            ll j=i;
            ll o=0,z=0;
            for(ll k=0;k<=j;k++){
                if(k>=0&&k<n&&(j-k)>=0&&(j-k)<m){
                    if(arr[k][j-k])o++;
                    else z++;
                }
            }
            ones.push_back(o);
            zeros.push_back(z);
        }
        ll len=ones.size();
        len--;
//        for(ll i=0;i<=len;i++){
//            cout<<ones[i]<<" "<<zeros[i]<<endl;
//        }
        ll ans=0;
        for(ll i=0, j=len;i<j;i++,j--){
            ll oo=ones[i]+ones[j];
            ll zz=zeros[i]+zeros[j];
            ans+=min(oo,zz);
        }
        cout<<ans<<"\n";
    }
    return 0;
}