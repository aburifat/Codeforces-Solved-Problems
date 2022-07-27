#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin>>n;

    for(ll i=0; i<n; i++){
        ll arr[n+10];
        ll a, s;
        cin>>a>>s;
        ll rs=s/a;
        ll rem=s%a;
        ll sum=0;
        sum+=((rs+1)*(rs+1)*rem);
        sum+=(rs*rs*(a-rem));
        cout<<sum<<endl;
    }
    return 0;
}