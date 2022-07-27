#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

constexpr ll MX=1e6;
constexpr ll base=29;
constexpr ll mod=1000000007;

vector<ll>preHash,sufHash;
vector<ll>basePow;

void ctPow()
{
    basePow.resize(MX+5);
    basePow[0]=1;
    for(ll i=1;i<=MX;i++){
        basePow[i]=(basePow[i-1]*base)%mod;
    }
}

void ctHash(string s)
{
    ll len=s.size();
    preHash.resize(len+5);
    preHash[0]=s[0]-'a'+1;
    for(ll i=1;i<len;i++)preHash[i]=((preHash[i-1]*base)+(s[i]-'a'+1))%mod;
    sufHash.resize(len+5);
    sufHash[len-1]=s[len-1]-'a'+1;
    for(ll i=2;i<=len;i++)sufHash[len-i]=(((s[len-i]-'a'+1)*basePow[i-1])+sufHash[len-i+1])%mod;
}

ll findMid(ll hsh, ll len, ll sz)
{
    ll ans=-1;
    for(ll i=sz;i<len-1;i++){
        ll tmp=preHash[i]-((preHash[i-sz]*basePow[sz])%mod);
        if(tmp<0)tmp+=mod;
        if(hsh==tmp){
            ans=i-sz+1;
            break;
        }
    }
    return ans;
}

int main()
{
    ctPow();
    string s;
    cin>>s;
    ll len=s.size();
    ctHash(s);
    ll ck=0;
    for(ll i=2;i<=len;i++){
        if(preHash[len-i]==sufHash[i-1]){
            ll idx=findMid(preHash[len-i],len,len-i+1);
            if(idx!=-1){
                ck=1;
                for(ll j=idx;j<idx+len-i+1;j++)cout<<s[j];
                cout<<"\n";
                break;
            }
        }
    }
    if(ck==0)cout<<"Just a legend\n";
    return 0;
}