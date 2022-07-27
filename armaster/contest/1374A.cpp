#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

int main()
{
    fast;
    ll t;
    cin>>t;
    ll x,y,n;
    while(t--){
        cin>>x>>y>>n;
        n-=y;
        n/=x;
        n*=x;
        n+=y;
        cout<<n<<"\n";
    }
    return 0;
}