#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll n;
    //init:
    while(t--)
    {
        cin>>n;
        ll uni[n+5];
        map<ll,ll>mp;
        vector<ll>us;
        ll ctidx=1;
        for(ll i=1; i<=n; i++)
        {
            cin>>uni[i];
            if(mp[uni[i]]==0)
            {
                mp[uni[i]]=ctidx;
                ctidx++;
                us.push_back(uni[i]);
            }
        }
        ctidx=us.size();
        vector<pair<ll,ll> >v;
        for(ll i=1; i<=n; i++)
        {
            ll tmp;
            cin>>tmp;
            /*
            if(n==1){
                cout<<tmp<<"\n";
                goto init;
            }
            */
            v.push_back({tmp,mp[uni[i]]});
        }
        //if(n==1)cout<<
        sort(v.begin(),v.end());
        vector<ll>arr[ctidx+5];
        ll len=v.size();
        for(ll i=len-1; i>=0; i--)
        {
            arr[v[i].second].push_back(v[i].first);
        }
        ll szs[ctidx+5];
        for(ll i=1; i<=ctidx; i++)
        {
            len=arr[i].size();
            szs[i]=len;
            for(ll j=1; j<len; j++)
            {
                arr[i][j]+=arr[i][j-1];
            }
        }
        //cout<<"OK\n";
        ll ans[n+5];
        for(ll i=0; i<=n; i++)ans[i]=0;
        for(ll i=1; i<=ctidx; i++)
        {
            for(ll j=1; j<=szs[i]; j++)
            {
                ll idx=(szs[i]/j)*j;
                idx--;
                if(idx<0)continue;
                ans[j]+=arr[i][idx];
            }
        }
        //cout<<"OK\n";
        for(ll i=1; i<=n; i++)
        {
            if(i!=1)cout<<" ";
            cout<<ans[i];
        }
        cout<<"\n";
    }
    return 0;
}