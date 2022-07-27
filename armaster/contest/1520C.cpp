#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n==1){
            cout<<"1\n";
            continue;
        }
        else if(n==2){
            cout<<"-1\n";
            continue;
        }
        ll arr[n+5][n+5];
        ll val=2;
        ll sq=n*n;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                if(val>sq)break;
                arr[i][j]=val;
                val+=2;
            }
        }
        val=sq;
        if(val%2==0)val--;
        for(ll i=(n-1);i>=0;i--){
            for(ll j=(n-1);j>=0;j--){
                if(val<1)break;
                arr[i][j]=val;
                val-=2;
            }
        }
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n; j++){
                if(j!=0)cout<<" ";
                cout<<arr[i][j];
            }
            cout<<"\n";
        }
    }
    return 0;
}