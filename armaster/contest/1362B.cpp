#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll n;
    while(t--){
        cin>>n;
        set<int>arr;
        for(ll i=0;i<n;i++){
            ll tmp;
            cin>>tmp;
            arr.insert(tmp);
        }
        ll ck=0;
        for(ll i=1;i<=2000;i++){
            set<int>tst;
            for(auto u:arr){
                tst.insert(i^u);
            }
            if(arr==tst){
                cout<<i<<"\n";
                ck=1;
                break;
            }
        }
        if(!ck)cout<<"-1\n";
    }
    return 0;
}