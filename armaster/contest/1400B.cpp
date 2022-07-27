#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    ll cap_x, cap_y, ct_f, ct_s, w_f, w_s;
    cin>>t;
    while(t--){
        cin>>cap_x>>cap_y>>ct_f>>ct_s>>w_f>>w_s;
        if(cap_x<cap_y)swap(cap_x,cap_y);
        if(w_f>w_s){
            swap(w_f,w_s);
            swap(ct_f,ct_s);
        }
        ll ans=0;
        for(ll i=0;i<=ct_f;i++){
            ll in_x_f=min(i,(cap_x/w_f));
            ll in_x_s=(cap_x-(in_x_f*w_f))/w_s;
            in_x_s=min(ct_s,in_x_s);

            ll rest_f=ct_f-in_x_f;
            ll rest_s=ct_s-in_x_s;

            ll in_y_f=cap_y/w_f;
            in_y_f=min(rest_f,in_y_f);
            ll in_y_s=(cap_y-(in_y_f*w_f))/w_s;
            in_y_s=min(rest_s,in_y_s);

            ans=max(ans,in_x_f+in_x_s+in_y_f+in_y_s);
        }
        cout<<ans<<"\n";
    }
    return 0;
}

/*

1
1 26
1 9
7 3

*/