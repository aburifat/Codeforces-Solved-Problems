#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string red,blue;
        cin>>red>>blue;
        ll ctRed=0,ctBlue=0;
        for(ll i=0;i<n;i++){
            if(red[i]>blue[i])ctRed++;
            else if(blue[i]>red[i])ctBlue++;
        }
        if(ctRed>ctBlue)cout<<"RED\n";
        else if(ctBlue>ctRed)cout<<"BLUE\n";
        else cout<<"EQUAL\n";
    }
    return 0;
}