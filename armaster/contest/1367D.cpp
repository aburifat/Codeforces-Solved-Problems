#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll n;
    while(t--){
        bool err=false;
        string s;
        cin>>s;
        ll n=s.size();
        ll m;
        cin>>m;
        ll arr[m+3];
        for(ll i=0;i<m;i++){
            cin>>arr[i];
        }
        vector<ll>cnt;
        cnt.assign(30,0);
        for(ll i=0;i<n;i++){
            cnt[s[i]-'a']++;
        }
        map<ll,ll>visited;
        ll ct=0;
        ll charIdx=25;
        vector<char>b;
        b.resize(m+3);
        while(ct<m){
            ll ctTmp=0;
            vector<ll>idxs;
            for(ll i=0;i<m;i++){
                if(arr[i]==0&&!visited[i]){
                    idxs.push_back(i);
                    ctTmp++;
                }
            }
            if(ctTmp==0)
            {
                err=true;
                break;
            }
            for(charIdx; charIdx>=0;charIdx--){
                if(cnt[charIdx]>=ctTmp)break;
            }
            if(charIdx<0){
                err=true;
                break;
            }
            for(ll i=0;i<idxs.size();i++){
                b[idxs[i]]=('a'+charIdx);
                visited[idxs[i]]++;
                for(ll j=0;j<m;j++){
                    if(arr[j]==0)continue;
                    arr[j]-=abs(j-idxs[i]);
                }
            }
            ct+=ctTmp;
            charIdx--;
        }
        if(err){
            cout<<"Not Possible\n";
            continue;
        }
        for(ll i=0;i<m;i++){
            cout<<b[i];
        }
        cout<<"\n";
    }
    return 0;
}

/*
4
abac
3
2 1 0
abc
1
0
abba
3
1 0 1
ecoosdcefr
10
38 13 24 14 11 5 3 24 17 0

*/