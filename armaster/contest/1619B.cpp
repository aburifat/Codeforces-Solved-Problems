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
		map<ll,ll>mp;
		ll ans=0;
		for(ll i=1;i<sqrt(n)+5;i++){
			ll tmp=i*i;
			if(tmp<=n){
				if(mp[tmp]==0){
					mp[tmp]=1;
					ans++;
				}
			}
			tmp*=i;
			if(tmp<=n){
				if(mp[tmp]==0){
					mp[tmp]=1;
					ans++;
				}
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}