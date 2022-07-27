#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll val[1009];

void inis()
{
    val[0]=1;
    val[1]=4;
    val[2]=4;
    for(ll i=3;i<=1000;i+=2){
        val[i]=((i+1)/2)*4;
        val[i]+=val[i-2];
    }
    for(ll i=4;i<=1000;i+=2){
        val[i]=(i/2)*4;
        val[i]+=val[i-4];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    inis();
    ll n;
    cin>>n;
    cout<<val[n]<<endl;
    return 0;
}