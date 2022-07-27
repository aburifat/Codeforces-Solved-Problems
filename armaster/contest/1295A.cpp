#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s="";
        ll ck=0;
        if((n%2!=0)&&(n>=3)){
            ck=1;
            n-=3;
        }
        ll ct=n/2;
        for(ll i=0; i<ct;i++){
            s+="1";
        }
        if(ck){
            s="7"+s;
        }
        cout<<s<<endl;
    }
    return 0;
}