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
// Problem	: D. Meta-set
// Contest	: Codeforces - Codeforces Round #824 (Div. 2)
// URL		: https://codeforces.com/contest/1735/problem/D
// Memory Limit : 256 MB
// Time Limit	: 4000 ms


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll>find_comp(vector<ll>a,vector<ll>b,ll k){
	vector<ll>tmp;
	for(ll i=0;i<k;i++){
		tmp.push_back((6-(a[i]+b[i]))%3);
	}
	return tmp;
}

int main(){
	ll t=1;
	//cin>>t;
	for(ll T=1;T<=t;T++){
		ll n, k;
		cin>>n>>k;
		vector<ll>v[n];
		for(ll i=0;i<n;i++){
			for(ll j=0;j<k;j++){
				ll tmp;
				cin>>tmp;
				v[i].push_back(tmp);
			}
		}
		map<vector<ll>,int>ct;
		for(ll i=0;i<n;i++){
			for(ll j=i+1;j<n;j++){
				vector<ll>center=find_comp(v[i],v[j],k);
				ct[center]++;
			}
		}
		ll ans=0;
		for(ll i=0;i<n;i++){
			ans+=((ct[v[i]]*(ct[v[i]]-1))/2);
		}
		cout<<ans<<endl;
	}
	return 0;
}