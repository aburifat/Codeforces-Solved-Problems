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
// Problem	: A. Wonderful Permutation
// Contest	: Codeforces - Codeforces Round #813 (Div. 2)
// URL		: https://codeforces.com/contest/1712/problem/0
// Memory Limit : 256 MB
// Time Limit	: 1000 ms


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t=1;
	cin>>t;
	for(ll T=1;T<=t;T++){
		ll n,k;
		cin>>n>>k;
		vector<pair<ll,ll>>v;
		for(ll i=0;i<n;i++){
			ll tmp;
			cin>>tmp;
			v.push_back({tmp,i+1});
		}
		sort(v.begin(),v.end());
		ll ct=0;
		for(ll i=0;i<k;i++){
			if(v[i].second>k)ct++;
		}
		cout<<ct<<endl;
	}
	return 0;
}