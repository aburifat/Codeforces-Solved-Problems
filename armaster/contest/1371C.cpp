#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll a, b, n, m;
    while(t--){
        cin>>a>>b>>n>>m;
        ll mnn=min(a,b);
        ll mxx=max(a,b);
        if((a+b)<(n+m)){
            cout<<"No\n";
            continue;
        }
        if(m<=mnn){
            cout<<"Yes\n";
        }else cout<<"No\n";
    }
    return 0;
}