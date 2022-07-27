#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    ll arr[n+5];
    for(ll i=0;i<n;i++)cin>>arr[i];
    ll val[n+5][n+5];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            if(i==j)val[i][j]=arr[i];
            else val[i][j]=0;
        }
    }
    for(ll k=0; k<n; k++){
        ll ct=arr[k]-1;
        ll i=k,j=k;
        while(ct){
            ll ck=0;
            if((j-1)>=0){
                if(val[i][j-1]==0){
                    val[i][j-1]=arr[k];
                    j--;
                    ck=1;
                    ct--;
                }
            }
            if(ck==0){
                ll ck2=0;
                if((i+1)<n){
                    if(val[i+1][j]==0){
                        val[i+1][j]=arr[k];
                        i++;
                        ck2=1;
                        ct--;
                    }
                }
                if(ck2==0){
                    cout<<"-1\n";
                    return 0;
                }
            }
        }
    }
    for(ll i=0;i<n;i++){
        for(ll j=0;j<=i;j++){
            if(j!=0)cout<<" ";
            cout<<val[i][j];
        }
        cout<<"\n";
    }
    return 0;
}