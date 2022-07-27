#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    //freopen("input.txt","r",stdin);
    vector<ll>v[100010];
    map<ll,ll>m,vst;
    queue<ll>q;
    ll n;
    cin>>n;
    for(ll i=0; i<n-2; i++){
        ll a,b,c;
        cin>>a>>b>>c;
        v[a].push_back(b);
        v[c].push_back(b);
        v[b].push_back(a);
        v[c].push_back(a);
        v[a].push_back(c);
        v[b].push_back(c);
        m[a]++;
        m[b]++;
        m[c]++;
    }
    for(ll i=0; i<n;i++){
        if(m[i]==1){
            q.push(i);
            m[i]--;
            vst[i]=1;
            break;
        }
    }
    while(!q.empty()){
        vector<pair<ll,ll> >vp;
        ll p=q.front();
        q.pop();
        cout<<p;
        for(ll j=0; j<v[p].size();j++){
            if(!vst[v[p][j]]){
                vp.push_back(make_pair(m[v[p][j]],v[p][j]));
                m[v[p][j]]--;
                vst[v[p][j]]=1;
            }
        }
        sort(vp.begin(),vp.end());
        for(ll j=0; j<vp.size();j++){
            q.push(vp[j].second);
        }
        if(!q.empty()){
            cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}