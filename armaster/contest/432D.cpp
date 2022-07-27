#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll>pi;
void preFunc(string s)
{
    ll len=s.size();
    pi.resize(len+5);
    pi[0]=0;
    for(ll i=1;i<len;i++){
        ll j=pi[i-1];
        while(j>0&&s[i]!=s[j])j=pi[j-1];
        if(s[i]==s[j])j++;
        pi[i]=j;
    }
}

int main()
{
    string s;
    cin>>s;
    ll len=s.size();
    preFunc(s);
    vector<ll>ans(len+5);
    for (ll i=0;i<len;i++)ans[pi[i]]++;
    for(ll i=len-1;i>0;i--)ans[pi[i-1]]+=ans[i];
    for(ll i=0;i<=len;i++)ans[i]++;
    ll j=pi[len-1];
    vector<ll>val;
    val.push_back(len);
    while(j>0){
        if(s[len-1]==s[j-1])val.push_back(j);
        j=pi[j-1];
    }
    sort(val.begin(),val.end());
    cout<<val.size()<<"\n";
    for(ll i=0;i<(ll)val.size();i++){
        cout<<val[i]<<" "<<ans[val[i]]<<"\n";
    }
    return 0;
}