#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll abss(ll k){
    if(k>=0)return k;
    else return -k;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n+5];
        for(ll i=0; i<n; i++){
            cin>>arr[i];
        }
        ll mx=LONG_MIN,mn=LONG_MAX;
        for(ll i=0; i<n; i++){
            if(arr[i]!=-1){
                ll ck=1;
                if(i>0){
                    if(arr[i-1]==-1){
                        mx=max(mx,arr[i]);
                        mn=min(mn,arr[i]);
                        ck=0;
                    }
                }
                if(ck){
                    if(i<(n-1)){
                        if(arr[i+1]==-1){
                            mx=max(mx,arr[i]);
                            mn=min(mn,arr[i]);
                        }
                    }
                }
            }

        }
        ll num=mn+(mx-mn)/2;
        ll dif=LONG_MIN;
        if(arr[0]==-1){
            arr[0]=num;
        }
        for(ll i=1; i<n; i++){
            if(arr[i]==-1){
                arr[i]=num;
            }
            ll dif2=abss(arr[i]-arr[i-1]);
            dif=max(dif,dif2);
        }
        cout<<dif<<" "<<num<<endl;
    }
    return 0;
}