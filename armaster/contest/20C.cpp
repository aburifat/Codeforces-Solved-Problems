#include<bits/stdc++.h>
using namespace std;

vector<vector<pair<int, int> > > v(100000, vector<pair<int, int> > () );
priority_queue<pair<int, pair<int, int> > >q;
int visited[100000];
vector<int>parent(100000, -1);


void f(int k);

int main()
{
    int n, m;
    cin>>n>>m;
    //fill(cost, cost+n, INT_MAX);
    int a, b, w;
    for(int i=0; i<m; i++)
    {
        scanf("%d%d%d", &a, &b, &w);

        v[a-1].push_back(make_pair(b-1, -w) );
        v[b-1].push_back(make_pair(a-1, -w) );
    }
    q.push(make_pair(0, make_pair(0,0) ) );
    while(!q.empty() )
    {
        w=q.top().first;
        b=q.top().second.first;
        if(!visited[b])
        {
            visited[b]=1;
            parent[b]=q.top().second.second;
            q.pop();
            for(int i=0; i<v[b].size(); i++)
            {
                ///q  <-  weight+weight of parent, child, parent
                q.push(make_pair(w+v[b][i].second, make_pair(v[b][i].first, b) ) );
            }
        }
        else
        {
            q.pop();
        }
    }
    if(parent[n-1]==-1)
    {
        cout<<-1<<endl;
        return 0;
    }
    f(n-1);
    return 0;
}

void f(int k)
{
    if(parent[k]!=k)
    {
        f(parent[k]);
    }
    cout<<k+1<<" ";
}