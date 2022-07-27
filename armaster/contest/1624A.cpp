#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll t;
	cin>>t;
	while(t--){
	ll n;
		cin>>n;
		vector<ll>v;
		for(ll i=0;i<n;i++){
			ll tmp;
			cin>>tmp;
			v.push_back(tmp);
		}
		sort(v.begin(),v.end());
		ll ans=abs(v[n-1]-v[0]);
		cout<<ans<<"\n";
	}
	return 0;
}