#include<bits/stdc++.h>
using namespace std;

int main(){
    map<long long, long long>m;
    long long n;
    cin>>n;
    while(n--){
        int tmp;
        cin>>tmp;
        if(tmp==1){
            m[1]++;
        }else{
            m[2]++;
        }
    }
    if(m[2]){
        cout<<"2 ";
        m[2]--;
    }
    if(m[1]){
        cout<<"1 ";
        m[1]--;
    }
    while(m[2]--){
        cout<<"2 ";
    }
    while(m[1]--){
        cout<<"1 ";
    }
    cout<<endl;
    return 0;
}