#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x=0;
    cin>>n;
    map<int, int>m;
    while(1){
        if(m[n]){
            cout<<x<<endl;
            break;
        }
        x++;
        m[n]=1;
        n++;
        while(n%10==0){
            n/=10;
        }

    }
    return 0;
}