#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

constexpr ll MX = 5000000;

ll base=129;
ll mod=1479386893;

ll powBase[MX+5];

void ctPow(){
    powBase[0]=1;
    for(ll i=1;i<=MX;i++){
        powBase[i] = (powBase[i-1]*base)%mod;
    }
}
ll palPre[MX+5];
void getHash(string s){
    ll len=s.size();
    ll hsh=0, revHsh=0;
    for(ll i=0;i<len;i++){
        hsh=((hsh*base)%mod+(s[i]-'0'+1))%mod;
        revHsh=(revHsh+((s[i]-'0'+1)*powBase[i])%mod)% mod;;
        if(hsh==revHsh)palPre[i]=1;
        else palPre[i]=0;
    }
}

ll solve(string s)
{
    getHash(s);
    ll len=s.size();
    for(ll i=1;i<len;i++){
        if(palPre[i]!=0){
            palPre[i]+=palPre[(i-1)/2];
        }
    }
    ll sum=0;
    for(ll i=0;i<len;i++)sum+=palPre[i];
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ctPow();
    string s;
    cin>>s;
    ll ans=solve(s);
    cout<<ans<<"\n";
    return 0;
}