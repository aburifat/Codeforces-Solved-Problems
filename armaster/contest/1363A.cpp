#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    ll x, n,tmp;
    while(t--){
        ll ck=0;
        ll even=0,odd=0;
        cin>>n>>x;
        for(ll i=0;i<n;i++){
            cin>>tmp;
            if(tmp%2==0)even++;
            else odd++;
        }
        if(even>=x)x=1;
        else if(even){
            x-=even;
            if(x%2==0)x++;
        }
        if(x%2!=0&&(x<=odd))cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}