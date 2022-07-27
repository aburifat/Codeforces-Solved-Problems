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
// Problem	: D. Black and White Stripe
// Contest	: Codeforces - Codeforces Round #797 (Div. 3)
// URL		: https://codeforces.com/contest/1690/problem/D
// Memory Limit : 256 MB
// Time Limit	: 2000 ms


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t=1;
	cin>>t;
	for(ll T=1;T<=t;T++){
		ll n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		ll ct=0;
		for(ll i=0;i<k;i++){
			if(s[i]=='W')ct++;
		}
		ll tmp=ct;
		for(ll i=k;i<n;i++){
			//cout<<(i-k)<<" "<<i<<" "<<tmp<<endl;
			if(s[i-k]=='W')tmp--;
			if(s[i]=='W')tmp++;
			ct=min(ct,tmp);
		}
		cout<<ct<<endl;
	}
	return 0;
}