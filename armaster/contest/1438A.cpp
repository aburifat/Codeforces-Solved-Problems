#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll n;
    while(t--){
        cin>>n;
        for(ll i=0;i<n;i++){
            if(i!=0)cout<<" ";
            cout<<"1";
        }
        cout<<"\n";
    }
    return 0;
}