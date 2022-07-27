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
		map<ll,ll>mp;
		ll ck=0;
		for(ll i=0;i<n;i++){
			if(v[i]<=n&&mp[v[i]]==0)mp[v[i]]++;
			else{
				ll tmp=v[i];
				while(tmp){
					tmp/=2;
					if(tmp<=n&&mp[tmp]==0){
						mp[tmp]++;
						break;
					}
				}
				if(tmp==0){
					ck=1;
					break;
				}
			}
		}
		if(ck)cout<<"NO\n";
		else cout<<"YES\n";
	}
	return 0;
}