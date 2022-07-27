#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    //ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n+5];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        if(arr[0]==1){
            cout<<n+1;
            for(ll i=1;i<=n;i++){
                cout<<" ";
                cout<<i;
            }
            cout<<"\n";
        }else if(arr[n-1]==0){
            for(ll i=1;i<=n;i++){
                if(i>1)cout<<" ";
                cout<<i;
            }
            cout<<" "<<n+1<<"\n";
        }
        else{
            ll ones=0,zeros=0;
            for(ll i=0;i<n;i++){
                if(arr[i]==1)ones++;
                else zeros++;
            }
            if(ones==0||zeros==0)cout<<"-1\n";
            else{
                if(zeros==1&&arr[n-1]==0){
                    for(ll i=1;i<=n+1;i++){
                        if(i<1)cout<<" ";
                        cout<<i;
                    }
                    cout<<"\n";
                }else{
                    ll now=0;
                    ll ck=0;
                    for(ll i=0;i<n-1;i++){
                        if(arr[i]==0&&arr[i+1]==1){
                            ck=1;
                            now=i+1;
                            break;
                        }
                    }
                    if(ck==0)cout<<"-1\n";
                    else{
                        for(ll i=1;i<=now;i++){
                            if(i>1)cout<<" ";
                            cout<<i;
                        }
                        cout<<" "<<n+1;
                        for(ll i=now+1;i<=n;i++){
                            cout<<" ";
                            cout<<i;
                        }
                        cout<<"\n";
                    }
                }
            }
        }
    }
    return 0;
}