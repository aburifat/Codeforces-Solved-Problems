#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    string s;
    ll x;
    while(t--){
        cin>>s;
        cin>>x;
        ll len = s.size();
        ll arr[len+3];
        ll ck=0;
        for(ll i=0;i<len;i++)arr[i]=-1;
        for(ll i=0;i<len;i++){
            ll j=i-x;
            ll k=i+x;
            ll val=s[i]-'0';
            if(j<0&&k>=len){
                if(val==1){
                    ck=1;
                    break;
                }else{
                    continue;
                }
            }
            if(val==0){
                if(j>=0){
                    if(arr[j]==1){
                        ck=1;
                        break;
                    }else arr[j]=0;
                }
                if(k<len){
                    if(arr[k]==1){
                        ck=1;
                        break;
                    }else arr[k]=0;
                }
            }
            else{
                if(j<0){
                    if(arr[k]==0){
                        ck=1;
                        break;
                    }else arr[k]=1;
                }else if(k>=len){
                    if(arr[j]==0){
                        ck=1;
                        break;
                    }else arr[j]=1;
                }else{
                    if((arr[j]==1)||(arr[k]==1))continue;
                    else if(arr[j]==-1)arr[j]=1;
                    else if(arr[k]==-1)arr[k]=1;
                    else{
                        ck=1;
                        break;
                    }
                }
            }
        }
        if(ck){
            cout<<"-1\n";
            continue;
        }
        for(ll i=0;i<len;i++){
            if(arr[i]==-1)arr[i]=0;
        }
        for(ll i=0;i<len;i++){
            cout<<arr[i];
        }
        cout<<"\n";
    }

    return 0;
}