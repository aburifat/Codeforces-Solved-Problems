#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    ll n;
    while(t--){
        cin>>n;
        n+=2;
        ll ck=0;
        vector<ll>v;
        for(ll i=0;i<n;i++){
            ll tmp;
            cin>>tmp;
            v.push_back(tmp);
        }
        sort(v.begin(),v.end());
        ll sum=0;
        for(ll i=0;i<n-1;i++){
            sum+=v[i];
        }
        ll dif=sum-v[n-1];
        //cout<<"Diff : "<<dif<<endl;
        if(dif<=0){
            if(sum==(2*v[n-2]))ck=1;
            else ck=-1;
        }else{
            ll ft=0;
            for(ll i=0;i<n-1;i++){
                if(v[i]==dif){
                    dif=i;
                    ck=2;
                    ft=1;
                    break;
                }
            }
            if(ft==0){
                if(sum==(2*v[n-2]))ck=1;
                else ck=-1;
            }
        }
        if(ck==-1)cout<<ck<<"\n";
        else if(ck==1){
            for(ll i=0;i<n-2;i++){
                if(i!=0)cout<<" ";
                cout<<v[i];
            }
            cout<<"\n";
        }else if(ck==2){
            ll dd=0;
            for(ll i=0;i<n-1;i++){
                if(i==dif)continue;
                if(dd==0)dd=1;
                else cout<<" ";
                cout<<v[i];
            }
            cout<<"\n";
        }
    }
    return 0;
}