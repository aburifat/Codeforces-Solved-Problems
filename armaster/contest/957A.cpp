#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll len=s.size();
    for(ll i=0; i<n-1; i++)
    {
        if(s[i]==s[i+1]&&s[i]!='?')
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    if(s[0]=='?'||s[len-1]=='?')
    {
        cout<<"Yes"<<endl;
        return 0;
    }

    for(ll i=1; i<n-1; i++)
    {
        if(s[i]=='?')
        {
            if(s[i-1]==s[i+1]||s[i+1]=='?')
            {
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }

    cout<<"No"<<endl;
    return 0;
}