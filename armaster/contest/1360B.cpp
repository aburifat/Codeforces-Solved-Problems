#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    ll n;
    while(t--){
        cin>>n;
        vector<ll>a;
        for(ll i=0;i<n;i++){
            ll tmp;
            cin>>tmp;
            a.push_back(tmp);
        }
        sort(a.begin(),a.end());
        ll minn=INT_MAX;
        for(ll i=1;i<n;i++){
            minn=min(minn,(a[i]-a[i-1]));
        }
        cout<<minn<<endl;
    }
    return 0;
}