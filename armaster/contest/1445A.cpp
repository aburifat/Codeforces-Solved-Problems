#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

constexpr ll _=59;

ll a[_], b[_];

bool cmp(ll i, ll j){return i>j;}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll n, x;
    while(t--){
        cin>>n>>x;
        for(ll i=0;i<n;i++)cin>>a[i];
        for(ll i=0;i<n; i++)cin>>b[i];
        sort(a,a+n);
        sort(b,b+n,cmp);
        bool ck=true;
        for(ll i=0;i<n;i++){
            if(a[i]+b[i]>x){
                ck=false;
                break;
            }
        }
        if(ck)cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}