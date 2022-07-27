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
        vector<ll>v;
        map<ll,ll>mp;
        ll tmp;
        for(ll i=0;i<n; i++){
            cin>>tmp;
            if(mp[tmp]==0)v.push_back(tmp);
            mp[tmp]++;
        }
        sort(v.begin(),v.end());
        ll ck=0;
        ll num1=0;
        for(ll i=0;i<=100;i++){
            if(mp[i]==0){
                num1=i;
                break;
            }else{
                mp[i]--;
            }
        }
        ll num2=0;
        for(ll i=0;i<=100;i++){
            if(mp[i]==0){
                num2=i;
                break;
            }else{
                mp[i]--;
            }
        }
        cout<<num1+num2<<"\n";
    }
    return 0;
}