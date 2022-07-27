#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    ll n,w,c;
    while(t--) {
        cin>>n>>w;
        c=(w/2)+(w%2);
        bool ck=false;
        ll single_ans;
        vector<pair<ll,ll> >item;
        for(ll i=0;i<n;i++){
            ll tmp;
            cin>>tmp;
            if(tmp>w||ck==true)continue;
            if(tmp>=c){
                ck=true;
                single_ans=i;
                continue;
            }
            item.push_back({tmp,i});
        }
        if(ck){
            cout<<"1\n"<<(single_ans+1)<<"\n";
        }else{
            ll len=item.size();
            ll sum=0;
            vector<ll>ans;
            for(ll i=0;i<len;i++){
                sum+=item[i].first;
                ans.push_back((item[i].second)+1);
                if(sum>=c)break;
            }
            if(sum>=c){
                cout<<ans.size()<<"\n";
                for(ll i=0;i<ans.size();i++){
                    if(i!=0)cout<<" ";
                    cout<<ans[i];
                }
                cout<<"\n";
            }else{
                cout<<"-1\n";
            }
        }
    }
    return 0;
}