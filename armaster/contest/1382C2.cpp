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
        string s1,s2;
        cin>>s1>>s2;
        vector<ll>ans;
        char curr;
        curr=s1[0];
        for(ll i=0;i<n;i++){
            if(s1[i]!=curr){
                ans.push_back(i);
                curr=s1[i];
            }
        }
        if(s1[n-1]!=s2[n-1])ans.push_back(n);
        curr=s2[n-1];
        for(ll i=n-1;i>=0;i--){
            if(s2[i]!=curr){
                ans.push_back(i+1);
                curr=s2[i];
            }
        }
        ll len=ans.size();
        cout<<len;
        for(ll i=0;i<len;i++){
            cout<<" "<<ans[i];
        }
        cout<<"\n";
    }
    return 0;
}