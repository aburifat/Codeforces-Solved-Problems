#include<bits/stdc++.h>
using namespace std;

mod(long long a){
    if(a<0){
        return -a;
    }
    else return a;

}

int main(){
    vector<long long>v;
    for(int i=0; i<3;i++){
            long long tmp;
        cin>>tmp;
        v.push_back(tmp);
    }
    long long d,ans=0;
    cin>>d;
    sort(v.begin(),v.end());
    if(mod(v[0]-v[1])<d){
        ans+=(d-mod(v[0]-v[1]));
    }
    if(mod(v[1]-v[2])<d){
        ans+=(d-mod(v[1]-v[2]));
    }
    cout<<ans<<endl;
    return 0;
}