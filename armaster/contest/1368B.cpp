#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string s;
    s="codeforces";
    ll k;
    cin>>k;
    ll len =s.size();
    vector<ll>cnt;
    cnt.assign(len+3,0);
    for(ll i=0;;i++){
        ll curr=1;
        for(ll j=0;j<len;j++)curr*=cnt[j];
        if(curr>=k)break;
        cnt[i%len]++;
    }
    for(ll i=0;i<len;i++){
        for(ll j=0;j<cnt[i];j++)cout<<s[i];
    }cout<<"\n";
    return 0;
}