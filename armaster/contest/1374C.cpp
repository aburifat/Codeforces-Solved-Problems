#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

int main()
{
    fast;
    ll t;
    cin>>t;
    ll n;
    while(t--){
        cin>>n;
        string s;
        cin>>s;
        ll arr[n+3];
        arr[0]=0;
        for(ll i=1;i<=n;i++){
            if(s[i-1]=='(')arr[i]=arr[i-1]+1;
            else arr[i]=arr[i-1]-1;
        }
        ll minn=0;
        for(ll i=1;i<=n;i++){
            minn=min(minn,arr[i]);
        }
        if(minn<0){
            cout<<(minn*(-1))<<"\n";
        }
        else cout<<"0\n";
    }
    return 0;
}