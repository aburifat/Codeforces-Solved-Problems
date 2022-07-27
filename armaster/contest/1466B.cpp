///Problem No: B
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll n;
    while(t--)
    {
        cin>>n;
        ll tmp;

        vector<ll>v;
        for(ll i=0;i<n; i++)
        {
            cin>>tmp;
            v.push_back(tmp);
        }
        sort(v.begin(),v.end());
        map<ll,ll>mp;
        vector<ll>nv;
        for(ll i=0;i<n;i++){
            if(!mp[v[i]]){
                mp[v[i]]++;
                nv.push_back(v[i]);
            }else if(!mp[v[i]+1]){
                mp[v[i]+1]++;
                v[i]+=1;
                nv.push_back(v[i]);
            }
        }
        cout<<nv.size()<<"\n";
    }
    return 0;
}