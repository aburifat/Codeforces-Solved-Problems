#include<bits/stdc++.h>
using namespace std;


int main(){
    int q;
    cin>>q;
    while(q--){

        long long n,k;
        cin>>n>>k;
        long long minn=1000000007;
        long long maxx=-1;
        for(int i=0; i<n; i++){
            long long tmp;
            cin>>tmp;
            minn=min(minn,tmp);
            maxx=max(maxx,tmp);
        }
        long long diff=maxx-minn;
        if(diff>(2*k)){
            cout<<"-1"<<endl;
            continue;
        }else{
            cout<<minn+k<<endl;
        }
    }
    return 0;

}