#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    vector<ll>v;
	    ll one=0;
	    ll zero=0;
	    for(ll i=0;i<n;i++){
	        ll tmp;
	        cin>>tmp;
	        if(tmp==1)one++;
	        else if(tmp==0)zero++;
	        v.push_back(tmp);
	    }
	    sort(v.begin(),v.end());
	    ll ck=0;
	    if(one&&zero)ck=1;
	    else if(one&&(!zero)){
	        for(ll i=0;i<n-1;i++){
	            if(v[i]==(v[i+1]-1)){
	                ck=1;
	                break;
	            }
	        }
	    }
	    if(ck==0)cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}