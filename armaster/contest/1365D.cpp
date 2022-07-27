#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool visited[100][100];
ll val[100][100];
vector<pair<ll,ll> >good,bad;
map<pair<ll,ll>,ll>mp;
ll n, m;

ll dx[]= {-1,1,0,0};
ll dy[]= {0,0,-1,1};

bool bfs(ll x,ll y) {
    memset(visited,false,sizeof visited);
    queue<pair<ll,ll> >q;
    q.push({x,y});
    visited[x][y]=true;
    while(!q.empty()) {
        pair<ll,ll>s=q.front();
        q.pop();
        for(ll i=0; i<4; i++) {
            ll ux=s.first+dx[i];
            ll uy=s.second+dy[i];
            if(ux<0||ux>=n||uy<0||uy>=m)continue;
            if(!visited[ux][uy]&&(val[ux][uy]==0||val[ux][uy]==1)) {
                visited[ux][uy]=true;
                if((ux==n-1&&uy==m-1)||(mp[{ux,uy}]==1)){
                        mp[{x,y}]=1;
                        return true;
                }
                q.push({ux,uy});
            }
        }
    }
    return visited[n-1][m-1];
}
///empty=0,good=1,bad=2,block=3
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    while(t--) {
        good.clear();
        bad.clear();
        mp.clear();
        cin>>n>>m;
        char c;
        for(ll i=0; i<n; i++) {
            for(ll j=0; j<m; j++) {
                cin>>c;
                if(c=='G') {
                    good.push_back({i,j});
                    val[i][j]=1;
                } else if(c=='B') {
                    bad.push_back({i,j});
                    val[i][j]=2;
                }else if(c=='#'){
                    val[i][j]=3;
                }else{
                    val[i][j]=0;
                }
            }
        }
        ll ck=0;
        ll len=bad.size();
        ll x,y;
        for(ll i=0;i<len;i++){
            ll bx=bad[i].first;
            ll by=bad[i].second;
            if((bx==n-1)&&(by==m-1)){
                ck=1;
                break;
            }else if(((bx==n-1)&&(by==m-2))||((by==m-1)&&(bx==n-2))){
                if(good.size()==0){
                    ck=2;
                    break;
                }else{
                    ck=1;
                    break;
                }
            }else{
                val[bx][by]=3;
            }
            for(ll j=0;j<4;j++){
                x=bad[i].first+dx[j];
                y=bad[i].second+dy[j];
                if(x<0||x>=n||y<0||y>=m)continue;
                if(val[x][y]==0)val[x][y]=3;
                else if(val[x][y]==1){
                    ck=1;
                    break;
                }
            }
            if(ck)break;
        }
        if(ck==1){
            cout<<"No\n";
            continue;
        }else if(ck==2){
            cout<<"Yes\n";
            continue;
        }
        len=good.size();
        for(ll i=0; i<len; i++){
            bool val=bfs(good[i].first,good[i].second);
            if(!val){
                ck=1;
                break;
            }
        }
        if(ck==1)cout<<"No\n";
        else cout<<"Yes\n";
    }
    return 0;
}

/*
input:
1
2 5
B.GGG
.B.G.

output:
Yes

*/