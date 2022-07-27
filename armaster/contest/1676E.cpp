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
// Problem	: E. Eating Queries
// Contest	: Codeforces - Codeforces Round #790 (Div. 4)
// URL		: https://codeforces.com/contest/1676/problem/E
// Memory Limit : 256 MB
// Time Limit	: 3500 ms


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t=1;
	cin>>t;
	for(ll T=1;T<=t;T++){
		ll n,q;
		vector<ll>v;
		cin>>n>>q;
		for(ll i=0;i<n;i++){
			ll tmp;
			cin>>tmp;
			v.push_back(tmp);
		}
		vector<ll>query;
		for(ll i=0;i<q;i++){
			ll tmp;
			cin>>tmp;
			query.push_back(tmp);
		}
		sort(v.begin(),v.end());
		for(ll i=n-2;i>=0;i--){
			v[i]+=v[i+1];
		}
		reverse(v.begin(),v.end());
		for(ll i=0;i<q;i++){
			ll ans=lower_bound(v.begin(),v.end(),query[i])-v.begin();
			if(ans>=n)ans=-1;
			else ans++;
			cout<<ans<<endl;
		}
	}
	return 0;
}