#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    ll arr[5];
    while(t--){
        for(ll i=0; i<3; i++){
            cin>>arr[i];
        }
        sort(arr, arr+3);
        ll diff=arr[1]-arr[0];
        arr[2]-=diff;
        arr[1]-=diff;
        if(arr[2]<=(arr[0]+arr[1]+1)){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }

    }
    return 0;
}