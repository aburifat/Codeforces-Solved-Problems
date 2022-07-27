#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        ll len=s.size();
        ll ones=0,zeros=0;
        for(ll i=0;i<len;i++){
            if(s[i]=='1')ones++;
            else zeros++;
        }
        ll num=min(ones,zeros);
        if(num%2==0)cout<<"NET\n";
        else cout<<"DA\n";
    }
    return 0;
}