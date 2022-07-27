#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll ck=1;
        string a,b,c;
        cin>>a>>b>>c;
        ll len=a.size();
        for(ll i=0; i<len; i++)
        {
            if((c[i]!=a[i])&&(c[i]!=b[i]))
            {
                cout<<"NO"<<endl;
                ck=0;
                break;
            }
        }
        if(ck)
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}