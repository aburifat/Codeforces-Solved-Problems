#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, r, minn=20000, maxx=-1;
    cin>>n>>m>>r;
    for(int i=0; i<n; i++){
        int tmp;
        cin>>tmp;
        if(tmp<minn){
            minn=tmp;
        }
    }
    for(int i=0; i<m; i++){
        int tmp;
        cin>>tmp;
        if(tmp>maxx){
            maxx=tmp;
        }
    }
    if(minn<maxx){
        int s=(r/minn);
        r=r%minn;
        s=s*maxx;
        r+=s;
    }
    cout<<r<<endl;
    return 0;
}