#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll n;
    while(t--){
        cin>>n;
        ll arr[n+3];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        set<ll>ans;
        ans.insert(0);
        ans.insert(n-1);
        ll up=0,down=0;
        for(ll i=1;i<n; i++){
            if(arr[i]>arr[i-1]){
                up=1;
                if(down){
                    ans.insert(i-1);
                    //ans.insert(i);
                    down=0;
                }
            }
            if(arr[i]<arr[i-1]){
                down=1;
                if(up){
                    ans.insert(i-1);
                    //ans.insert(i);
                    up=0;
                }
            }
        }
        ll len=ans.size();
        cout<<len<<"\n";
        ll ck=0;
        for(auto i:ans){
            if(!ck)ck++;
            else cout<<" ";
            cout<<arr[i];
        }
        cout<<"\n";
    }
    return 0;
}