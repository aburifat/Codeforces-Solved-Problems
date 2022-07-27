// /*******Bismillahir-Rahmanir-Rahim**********/
// 
// Name         : Abu Rifat Muhammed Al Hasib
// Institution  : University of Barisal, Bangladesh
// Github       : https://github.com/abu-rifat
// website	: https://aburifat.com
// 
// Codeforces   : https://codeforces.com/profile/ARMaster
// lightoj      : https://lightoj.com/user/abu-rifat
// AtCoder      : https://atcoder.jp/users/aburifat
// codechef     : https://www.codechef.com/users/aburifat
// SPOJ         : https://www.spoj.com/users/abu_rifat
// UvaOJ        : https://uhunt.onlinejudge.org/id/889274
// 
// facebook     : https://facebook.com/AbuRifatM
// linkedin     : https://www.linkedin.com/in/aburifat
// Email        : rifat.cse4.bu@gmail.com
// 		  armalhasib@gmail.com
// 		  abu.rifat.m@gmail.com
// 
// Problem	: B. Shoe Shuffling
// Contest	: Codeforces - CodeCraft-22 and Codeforces Round #795 (Div. 2)
// URL		: https://codeforces.com/contest/1691/problem/B
// Memory Limit : 256 MB
// Time Limit	: 1000 ms


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t=1;
	cin>>t;
	for(ll T=1;T<=t;T++){
		ll n;
		cin>>n;
		ll arr[n+5];
		for(ll i=0;i<n;i++){
			cin>>arr[i];
		}
		map<ll,ll>mp,idx;
		vector<ll>v;
		vector<ll>ans;
		ll ck=0;
		for(ll i=0;i<n;i++){
			if(!mp[arr[i]]){
				v.push_back(arr[i]);
				idx[arr[i]]=i;
			}
			mp[arr[i]]++;
		}
		for(ll i=0;i<(ll)v.size();i++){
			if(mp[v[i]]<=1){
				ck=1;
				break;
			}
		}
		if(!ck){
			for(ll i=0;i<(ll)v.size();i++){
				ll l=idx[v[i]];
				ll r=l+mp[v[i]]-1;
				for(ll j=l+1;j<=r;j++){
					ans.push_back(j+1);
				}
				ans.push_back(l+1);
			}
			for(ll i=0;i<n;i++){
				if(i)cout<<" ";
				cout<<ans[i];
			}
			cout<<endl;
		}else{
			cout<<"-1\n";
		}
	}
	return 0;
}