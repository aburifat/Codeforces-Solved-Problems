#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pub push_back
vector<ll>T[200005];
ll visited[200005]={}, parent[200005]={}, distence[200005]={};
ll n;
void dfs(ll A){
    visited[A]=1;
    for(ll i=0; i<T[A].size();i++){
        ll node=T[A][i];
        if(visited[node]!=1){
            parent[node]=A;
            distence[node]=distence[A]+1;
            dfs(node);
        }
    }
}

int main()
{
    ll a=0,b=0,c=0;
    cin>>n;
    for(ll i=0; i<n-1;i++){
        ll u,v;
        cin>>u>>v;
        T[u].pub(v);
        T[v].pub(u);
    }
    dfs(1);
    ll node,dis=-1;
    for(ll i=1; i<=n;i++){
        if(distence[i]>dis){
            dis=distence[i];
            node=i;

        }
        //cout<<"Node : visited : distence : "<<i<<" "<<visited[i]<<" "<<distence[i]<<endl;
    }
    a=node;
    //cout<<"a : distance : "<<a<<" "<<distence[a]<<endl;
    for(ll i=1; i<=n;i++){
        visited[i]=0;
        parent[i]=0;
        distence[i]=0;
    }
    dfs(node);
    dis=-1;
    for(ll i=1; i<=n;i++){
        if(distence[i]>dis){
            dis=distence[i];
            node=i;
        }
        //cout<<"Node : visited : distence : "<<i<<" "<<visited[i]<<" "<<distence[i]<<endl;
    }
    b=node;
    //cout<<"b : distance : "<<b<<" "<<distence[b]<<endl;
    vector<ll>path;
    path.pub(b);
    for(ll i=b;;i=parent[i]){
        path.pub(i);
        if(i==a){
            break;
        }
    }
    for(ll i=1; i<=n;i++){
        visited[i]=0;
        parent[i]=0;
        distence[i]=0;
    }
    for(ll i=0; i<path.size();i++){
        ll nd=path[i];
        visited[nd]=1;
        parent[nd]=nd;
    }
    for(ll i=0; i<path.size();i++){
        dfs(path[i]);
    }
    ll dis2=-1;
    for(ll i=1; i<=n; i++){
        if((dis2<distence[i])&&(i!=a)&&(i!=b)){
            dis2=distence[i];
            c=i;
        }
        //cout<<"Node : visited : distence : "<<i<<" "<<visited[i]<<" "<<distence[i]<<endl;
    }
    ll sumdis=dis+dis2;
    cout<<sumdis<<endl;
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}