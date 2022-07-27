#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

constexpr ll MX=1e6;
constexpr ll base[]={131,137};
constexpr ll mod[]={1000000007,1000000009};

vector<ll>basePow[2];
void ctPow()
{
    basePow[0].resize(MX+5);
    basePow[1].resize(MX+5);
    basePow[0][0]=1;
    basePow[1][0]=1;
    for(ll i=1;i<=MX;i++){
        basePow[0][i]=(basePow[0][i-1]*base[0])%mod[0];
        basePow[1][i]=(basePow[1][i-1]*base[1])%mod[1];
    }
}

pair<vector<ll>,vector<ll> >ctHsh(string s)
{
    vector<ll>hsh[2];
    ll len=s.size();
    ll val=s[0]-'0'+1;
    hsh[0].push_back(val);
    hsh[1].push_back(val);
    for(ll i=1;i<len;i++){
        val=((hsh[0][i-1]*base[0])+(s[i]-'0'+1))%mod[0];
        hsh[0].push_back(val);
        val=((hsh[1][i-1]*base[1])+(s[i]-'0'+1))%mod[1];
        hsh[1].push_back(val);
    }
    return {hsh[0],hsh[1]};
}

int main()
{
    ctPow();
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll slen=s.size();
    vector<string>ans;
    ans.push_back(s);
    pair<vector<ll>,vector<ll> >sHshp=ctHsh(s);
    vector<ll>sHsh[2];
    sHsh[0]=sHshp.first;
    sHsh[1]=sHshp.second;
    string pt;
    for(ll i=1;i<n;i++){
        cin>>pt;
        ll ptlen=pt.size();
        pair<vector<ll>,vector<ll> >pHshp=ctHsh(pt);
        vector<ll>pHsh[2];
        pHsh[0]=pHshp.first;
        pHsh[1]=pHshp.second;
        ll idx=0;
        for(ll i=min(slen-1,ptlen-1);i>=0;i--){
            ll ptVal0=pHsh[0][i];
            ll ptVal1=pHsh[1][i];
            ll sVal0=sHsh[0][slen-1];
            ll sVal1=sHsh[1][slen-1];
            if((slen-2-i)>=0){
                sVal0-=(sHsh[0][slen-2-i]*basePow[0][i+1])%mod[0];
                sVal1-=(sHsh[1][slen-2-i]*basePow[1][i+1])%mod[1];
            }
            if(sVal0<0)sVal0+=mod[0];
            if(sVal1<0)sVal1+=mod[1];
            if((sVal0==ptVal0)&&(sVal1==ptVal1)){
                idx=i+1;
                break;
            }
        }
        for(ll i=idx;i<ptlen;i++){
            ll h=sHsh[0][(ll)sHsh[0].size()-1];
            ll hv=((h*base[0])+(pt[i]-'0'+1))%mod[0];
            sHsh[0].push_back(hv);
            h=sHsh[1][(ll)sHsh[1].size()-1];
            hv=((h*base[1])+(pt[i]-'0'+1))%mod[1];
            sHsh[1].push_back(hv);
            slen++;
        }
        if(idx<ptlen){
            string tmp=pt.substr(idx,ptlen-idx);
            ans.push_back(tmp);
        }
    }
    for(ll i=0;i<(ll)ans.size();i++)cout<<ans[i];
    cout<<"\n";
    return 0;
}