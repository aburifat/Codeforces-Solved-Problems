#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    //ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll n;
    while(t--){
        cin>>n;
        ll arr[n+3];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        deque<ll>q;
        ll i=0,j=1;
        ll ct=0;
        for(i,j;j<n;){
            //cout<<i<<" "<<j<<endl;
            if(arr[i]<arr[j]){
                if(q.empty()){
                    j++;
                    ct++;
                }else{
                    i=q[q.size()-1];
                    q.pop_back();
                    ct++;
                }
            }else{
                q.push_back(i);
                i=j;
                j++;
            }
        }
        if(ct==(n-1))cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}