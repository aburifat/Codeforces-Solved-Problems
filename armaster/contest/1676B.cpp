#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t=1;
	cin>>t;
	for(ll T=1;T<=t;T++){
		ll ans;
		ll n;
		cin>>n;
		ll sum=0;
		ll minn=LONG_LONG_MAX;
		for(ll i=0;i<n;i++){
			ll tmp;
			cin>>tmp;
			sum+=tmp;
			minn=min(minn,tmp);
		}
		ll tot=minn*n;
		cout<<abs(sum-tot)<<endl;
	}
	return 0;
}