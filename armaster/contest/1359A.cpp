#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    ll n, m, k;
    while(t--)
    {
        cin>>n>>m>>k;
        ll d=n/k;
        if(m<=d)cout<<m<<endl;
        else{
            ll mm=m-d;
            m=d;
            if(mm%(k-1)==0){
                mm=mm/(k-1);
            }else{
                mm=(mm/(k-1))+1;
            }
            cout<<m-mm<<endl;
        }
    }
    return 0;
}