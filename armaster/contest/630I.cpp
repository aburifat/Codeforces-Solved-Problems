/**      BU_Excalibur      **/
/** University of Barishal **/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll binpow(ll base, ll power)
{
    ll result=1;
    while(power>0){
        if(power&1)result=(result*base);
        base=(base*base);
        power>>=1;
    }
    return result;
}


int main()
{
    /***************************************/
    // Site Name        : Codeforces
    // Problem No/ID    : 630I
    /***************************************/
    // your code here   :

    ll n;
    cin>>n;
    ll type1=binpow(4,(n-2))*3;
    ll type2=binpow(4,n-3)*9;
    ll ans=(2*type1)+((n-3)*type2);
    cout<<ans<<"\n";

    return 0;
}

/*
input:
4

output:
132
*/