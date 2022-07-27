#include <bits/stdc++.h>
using namespace std;

vector<int>v[2005], r;
int arr[2005]={}, visited[2005]={};

void bfs(int r){
    queue<int>q;
    q.push(r);
    visited[r]=1;
    arr[r]=1;
    while(!q.empty()){
            //cout<<"Queue loop"<<endl;
        int t=q.front();
        q.pop();
        int next=v[t].size();
        for(int i=0; i<next;i++){
            if(visited[v[t][i]]!=1){
            q.push(v[t][i]);
            visited[v[t][i]]=1;
            arr[v[t][i]]=arr[t]+1;
            }
        }
    }
}


int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int tmp;
        cin>>tmp;
        if(tmp==-1){
            r.push_back(i+1);
        }else{
            v[i+1].push_back(tmp);
            v[tmp].push_back(i+1);
        }
    }
    //cout<<"Hello 1"<<endl;
    int len=r.size();
    for(int i=0; i<len; i++){
        bfs(r[i]);
    }
    //cout<<"Hello 2"<<endl;
    int maxx=-1;
    for(int i=1; i<=n; i++){
        if(arr[i]>maxx){
            maxx=arr[i];
        }
    }
    //cout<<"Hello 3"<<endl;
    cout<<maxx<<endl;
    return 0;
}