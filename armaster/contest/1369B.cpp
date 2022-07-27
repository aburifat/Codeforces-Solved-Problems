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
        string s;
        cin>>s;
        ll leadingZeros=0;
        for(ll i=0;i<n;i++){
            if(s[i]=='1')break;
            leadingZeros++;
        }
        ll trailingOnes=0;
        for(ll i=n-1;i>=0;i--){
            if(s[i]=='0')break;
            trailingOnes++;
        }
        for(ll i=0;i<leadingZeros;i++)cout<<"0";
        if((leadingZeros+trailingOnes!=n))cout<<"0";
        for(ll i=0;i<trailingOnes;i++)cout<<"1";
        cout<<"\n";
    }
    return 0;
}