#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fxd(i,x) std::fixed <<std::setprecision(i)<<(x)

int main()
{
    ll n;
    cin>>n;
    double ans=1.0;
    for(ll i=2; i<=n; i++){
        ans+=(1.0/(double)i);
    }
    cout<<fxd(12,ans)<<endl;
    return 0;
}