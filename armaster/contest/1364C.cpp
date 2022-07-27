#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n;
    cin>>n;
    ll arr[n+3];
    map<ll,ll>present;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        present[arr[i]]++;
    }
    deque<ll>missing;
    for(ll i=0;i<=n;i++){
        if(!present[i])missing.push_back(i);
    }
    deque<ll>ans;
    for(ll i=0;i<n;i++){
        if(i==0){
            ans.push_back(missing[0]);
            missing.erase(missing.begin());
            continue;
        }
        if(arr[i]==arr[i-1]){
            ans.push_back(missing[0]);
            missing.erase(missing.begin());
            continue;
        }
        ans.push_back(arr[i-1]);
    }
    ll ck=0;
    for(ll i=0;i<n;i++){
        if(!ck)ck++;
        else cout<<" ";
        cout<<ans[i];
    }
    cout<<endl;
    return 0;
}