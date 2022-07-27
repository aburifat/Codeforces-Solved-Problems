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
// Problem	: B. Promo
// Contest	: Codeforces - Educational Codeforces Round 130 (Rated for Div. 2)
// URL		: https://codeforces.com/contest/1697/problem/B
// Memory Limit : 256 MB
// Time Limit	: 2000 ms


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t=1;
	//cin>>t;
	for(ll T=1;T<=t;T++){
		ll n,q;
		cin>>n>>q;
		vector<ll>v;
		for(ll i=0;i<n;i++){
			ll tmp;
			cin>>tmp;
			v.push_back(tmp);
		}
		sort(v.begin(),v.end());
		reverse(v.begin(),v.end());
		for(ll i=1;i<n;i++){
			v[i]+=v[i-1];
		}
		ll x,y;
		for(ll i=0;i<q;i++){
			cin>>x>>y;
			ll val=v[x-1];
			if(x-y-1>=0)val-=v[x-y-1];
			cout<<val<<endl;
		}
	}
	return 0;
}