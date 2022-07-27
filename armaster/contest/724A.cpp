#include<bits/stdc++.h>
using namespace std;

#define ll long long

map<string,ll>m;

ll v[]= {0,2,3};

int main()
{
    m["monday"]=0;
    m["tuesday"]=1;
    m["wednesday"]=2;
    m["thursday"]=3;
    m["friday"]=4;
    m["saturday"]=5;
    m["sunday"]=6;
    string a,b;
    cin>>a>>b;
    for(ll i=0; i<3; i++)
    {
        if((m[a]+v[i])%7==m[b]){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}