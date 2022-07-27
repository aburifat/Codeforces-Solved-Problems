#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    vector<pair<ll,ll> >v;
	    for(ll i=0;i<n;i++){
	        ll tmp;
	        cin>>tmp;
	        v.push_back({tmp,i+1});
	    }
	    sort(v.begin(),v.end());
	    cout<<v[0].second<<" "<<v[n-1].second<<endl;
	}
	return 0;
}