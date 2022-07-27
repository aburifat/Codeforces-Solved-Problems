#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    ll n;
    string a,b;
    while(t--){
        cin>>n;
        cin>>a;
        cin>>b;
        ll arr[n+5][2];
        arr[0][0]=arr[0][1]=0;
        if(a[0]=='0')arr[0][0]=1;
        else arr[0][1]=1;
        for(ll i=1;i<n;i++){
            arr[i][0]=arr[i][1]=0;
            arr[i][0]+=arr[i-1][0];
            arr[i][1]+=arr[i-1][1];
            if(a[i]=='0')arr[i][0]++;
            else arr[i][1]++;
        }
        bool ck=true;
        bool ans=true;
        for(ll i=n-1;i>=0;i--){
            if(ck==true){
                if(a[i]!=b[i]){
                    if(arr[i][0]==arr[i][1])ck=false;
                    else{
                        ans=false;
                        break;
                    }
                }
            }else{
                if(a[i]==b[i]){
                    if(arr[i][0]==arr[i][1])ck=true;
                    else{
                        ans=false;
                        break;
                    }
                }
            }
        }
        if(ans==true)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}