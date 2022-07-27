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
        string si="";
        for(ll i=0;i<200;i++){
            si+='a';
        }
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        string s[n+3];
        for(ll i=0;i<=n;i++){
            s[i]=si;
        }
        for(ll i=1;i<=n;i++){
            for(ll j=0;j<arr[i-1];j++){
                s[i][j]=s[i-1][j];
            }
            for(ll j=arr[i-1];j<200;j++){
                s[i][j]=((((s[i-1][j]-'a')+1)%26)+'a');
            }
        }
        for(ll i=0;i<n+1;i++){
            cout<<s[i]<<"\n";
        }
    }
    return 0;
}