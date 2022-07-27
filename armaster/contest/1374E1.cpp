#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n, k;
    cin>>n>>k;
    vector<ll>both,fst,snd;
    ll t, a, b;
    for(ll i=0;i<n;i++)
    {
        cin>>t>>a>>b;
        if(a&&b)both.push_back(t);
        else if(a)fst.push_back(t);
        else if(b)snd.push_back(t);
    }
    ll b_len=both.size();
    ll f_len=fst.size();
    ll s_len=snd.size();
    ll len=min(f_len,s_len);
    if((b_len+len)<k){
        cout<<"-1\n";
        return 0;
    }
    sort(fst.begin(),fst.end());
    sort(snd.begin(),snd.end());
    for(ll i=0;i<len;i++){
        both.push_back(fst[i]+snd[i]);
    }
    sort(both.begin(),both.end());
    ll ans=0;
    for(ll i=0;i<k;i++){
        ans+=both[i];
    }
    cout<<ans<<"\n";
    return 0;
}