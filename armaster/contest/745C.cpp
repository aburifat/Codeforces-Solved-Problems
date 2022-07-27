#include<bits/stdc++.h>
using namespace std;

#define ll long long




int main()
{
    map<ll,ll>checked,capital,visited, ct;
    vector<ll>country[10010],cap;
    ll n,m,k;
    cin>>n>>m>>k;
    for(ll i=0; i<k; i++){
        ll tmp;
        cin>>tmp;
        capital[tmp]=1;
        cap.push_back(tmp);
    }
    for(ll i=0; i<m; i++){
        ll a, b;
        cin>>a>>b;
        if(capital[a]){
                country[a].push_back(b);
                checked[b]=1;
        }
        else if(capital[b]){
                country[b].push_back(a);
                checked[a]=1;
        }
        else{
            country[a].push_back(b);
            country[b].push_back(a);
        }
    }
    for(ll i=0; i<cap.size();i++){
        queue<ll>q;
        if(country[cap[i]].size()!=0){
            for(ll j=0; j<country[cap[i]].size(); j++){
                q.push(country[cap[i]][j]);
            }
            while(!q.empty()){
                ll key=q.front();
                q.pop();
                if(country[key].size()!=0&&visited[key]==0){
                    visited[key]=1;
                    for(ll p=0; p<country[key].size(); p++){
                        if(checked[country[key][p]]==0){
                            q.push(country[key][p]);
                            checked[country[key][p]]=1;
                            country[cap[i]].push_back(country[key][p]);
                        }
                    }
                }
            }
        }
    }
    ll mx=0,cc=0,sum=0;
    for(ll i=0; i<cap.size(); i++){
        ct[cap[i]]=country[cap[i]].size();
        sum+=ct[cap[i]];
        if(mx<ct[cap[i]]){
            mx=ct[cap[i]];
            cc=i;
        }
    }
    sum+=cap.size();
    ct[cap[cc]]+=(n-sum);
    ll ans=0;
    for(ll i=0; i<cap.size(); i++){
        ans+=(((ct[cap[i]]+1)*(ct[cap[i]]))/2);
    }
    ans-=m;
    cout<<ans<<endl;
    return 0;
}