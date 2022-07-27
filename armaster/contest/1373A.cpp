#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll a,b,c;
    while(t--){
        cin>>a>>b>>c;
        ll fsteq=(a*b);
        if(a>c)cout<<"-1 "<<b<<"\n";
        else if(fsteq<c)cout<<"1 -1\n";
        else if(fsteq==c){
            if(b==1)cout<<"-1 -1\n";
            else cout<<b-1<<" -1\n";
        }else{
            if(a<c)cout<<"1 "<<b<<"\n";
            else cout<<"-1 "<<b<<"\n";
        }
    }
    return 0;
}