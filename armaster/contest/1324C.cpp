#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<ll,ll>m;
vector<ll>v[5009];
ll arr[5009];

int main()
{
    ll t;
    cin>>t;

    for(ll T=1;T<=t; T++){
        string s;
        cin>>s;
        ll len=s.size();
        ll ss=0,tmp=0;
        for(ll i=0; i<len; i++)
        {
            if(s[i]=='R'){
                ss=max(ss,tmp);
                tmp=0;
            }else if(s[i]=='L')
            {
                tmp++;
                //cout<<"TMP : "<<tmp<<endl;
            }
            if(i==(len-1)){
                ss=max(ss,tmp);
            }
        }
        ss++;
        cout<<ss<<endl;
    }
    return 0;
}