#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

constexpr ll MX=5000;
constexpr ll base=29;
constexpr ll mod=1000000007;

vector<ll>basePow;
void ctPow()
{
    basePow.resize(MX+5);
    basePow[0]=1;
    for(ll i=1;i<=MX;i++)basePow[i]=(basePow[i-1]*base)%mod;
}

vector<ll>hsh,revhsh;
void ctHsh(string s)
{
    ll len=s.size();
    hsh.resize(len+5);
    hsh[0]=s[0]-'a'+1;
    for(ll i=1;i<len;i++)hsh[i]=((hsh[i-1]*base)+(s[i]-'a'+1))%mod;
    revhsh.resize(len+5);
    revhsh[0]=s[len-1]-'a'+1;
    for(ll i=1,j=len-2;i<len;i++,j--)revhsh[i]=((revhsh[i-1]*base)+(s[j]-'a'+1))%mod;
}

int main()
{
    ctPow();
    string s;
    cin>>s;
    ctHsh(s);
    ll len=s.size();
    unordered_map<ll,ll>mp;
    for(ll i=0;i<len;i++)mp[s[i]-'a'+1]=1;
    ll arr[len+6];
    for(ll i=0;i<=len;i++)arr[i]=0;
    //arr[1]=len;
    for(ll sz=1;sz<=len;sz++){
        for(ll idx=sz-1,revidx=len-1;idx<len;idx++,revidx--){
            ll lidx=idx-sz;
            ll lrevidx=revidx-sz;
            ll fro=hsh[idx];
            if(lidx>=0)fro=fro-(hsh[lidx]*basePow[sz])%mod;
            if(fro<0)fro+=mod;
            ll rev=revhsh[revidx];
            if(lrevidx>=0)rev=rev-(revhsh[lrevidx]*basePow[sz])%mod;
            if(rev<0)rev+=mod;
            if(fro==rev){
                if(mp[fro]==0){
                    ll nsz=sz/2;
                    //cout<<"SZ and NSZ : "<<sz<<" "<<nsz<<endl;
                    ll r=lidx+nsz;
                    //cout<<"lidx and r : "<<lidx<<" "<<r<<endl;
                    ll tmp=hsh[r];
                    if(lidx>=0)tmp-=(hsh[lidx]*basePow[nsz])%mod;
                    if(tmp<0)tmp+=mod;
                    mp[fro]=mp[tmp]+1;
                }
                arr[mp[fro]]++;
            }
        }
    }
    for(ll i=len-1;i>=1;i--)arr[i]+=arr[i+1];
    for(ll i=1;i<=len;i++){
        if(i>1)cout<<" ";
        cout<<arr[i];
    }
    cout<<"\n";
    return 0;
}