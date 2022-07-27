///Problem No: A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    ll n,x;
    while(t--)
    {
        cin>>n>>x;
        ll sum=0;
        ll mx=0;
        ll mn=0;
        for(ll i=0; i<n; i++)
        {
            ll tmp;
            cin>>tmp;
            mx+=ceil((double)tmp/(double)x);
            sum+=tmp;
        }
        mn=ceil((double)sum/(double)x);
        cout<<mn<<" "<<mx<<"\n";
    }

    return 0;
}