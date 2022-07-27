#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        vector<ll>v;
        ll n;
        for(ll i=0; i<3; i++)
        {
            ll tmp;
            cin>>tmp;
            v.push_back(tmp);
        }
        cin>>n;
        sort(v.begin(),v.end());
        ll diff=(v[2]-v[1])+(v[2]-v[0]);
        if(diff<=n){
            n=n-diff;
            if(n%3==0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }

        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}