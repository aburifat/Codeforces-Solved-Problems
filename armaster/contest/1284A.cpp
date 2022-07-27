#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,m;
    cin>>n>>m;
    vector<string>vn,vm;
    for(ll i=0; i<n; i++){
        string s;
        cin>>s;
        vn.push_back(s);
    }
    for(ll i=0; i<m; i++){
        string s;
        cin>>s;
        vm.push_back(s);
    }
    ll q;
    cin>>q;
    for(ll i=0; i<q; i++){
        ll tmp;
        cin>>tmp;
        tmp--;
        ll nn,mm;
        nn=tmp%n;
        mm=tmp%m;
        cout<<vn[nn]<<vm[mm]<<endl;
    }
    return 0;
}