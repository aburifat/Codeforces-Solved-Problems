#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll n, k;
    while(t--){
        cin>>n>>k;
        vector<ll>val,ct;
        ll tmp;
        for(ll i=0;i<n;i++){
            cin>>tmp;
            val.push_back(tmp);
        }
        for(ll i=0;i<k;i++){
            cin>>tmp;
            ct.push_back(tmp);
        }
        sort(val.begin(),val.end());
        reverse(val.begin(),val.end());
        sort(ct.begin(),ct.end());
        ll ans=0;
        for(ll i=0;i<k;i++){
            ans+=val[i];
        }
        ll rem=k-1;
        for(ll i=0;i<k;i++){
            if(ct[i]==1)ans+=val[i];
            else{
                rem+=(ct[i]-1);
                ans+=val[rem];
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}

/*
3
4 2
1 13 7 17
1 3
6 2
10 10 10 10 11 11
3 3
4 4
1000000000 1000000000 1000000000 1000000000
1 1 1 1

*/