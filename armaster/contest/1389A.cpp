#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll l, r;
    while(t--){
        cin>>l>>r;
        if((2*l)<=r)
            cout<<l<<" "<<2*l<<"\n";
        else cout<<"-1 -1\n";
    }
    return 0;
}