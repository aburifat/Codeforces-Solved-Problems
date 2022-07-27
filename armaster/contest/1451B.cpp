#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll n, q;
    char s[105];
    while(t--){
        cin>>n>>q;
        cin>>(s+1);
        ll f_z=-1, f_o=-1, l_z=-1, l_o=-1;
        for(ll i=1;i<=n;i++){
            if(s[i]=='0'){
                f_z=i;
                break;
            }
        }
        for(ll i=1;i<=n;i++){
            if(s[i]=='1'){
                f_o=i;
                break;
            }
        }
        for(ll i=n;i>0;i--){
            if(s[i]=='0'){
                l_z=i;
                break;
            }
        }
        for(ll i=n;i>0;i--){
            if(s[i]=='1'){
                l_o=i;
                break;
            }
        }
        //cout<<f_z<<" "<<f_o<<" "<<l_z<<" "<<l_o<<endl;
        ll l, r;
        ll ck;
        for(ll i=0;i<q;i++){
            cin>>l>>r;
            ck=1;
            if(s[l]=='0'){
                if(f_z<l)ck=0;
            }else{
                if(f_o<l)ck=0;
            }
            if(ck==0){
                cout<<"YES\n";
                continue;
            }
            if(s[r]=='0'){
                if(l_z>r)ck=0;
            }else{
                if(l_o>r)ck=0;
            }
            if(ck==1)cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
    return 0;
}