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
// Problem	: C. Restoring the Duration of Tasks
// Contest	: Codeforces - Codeforces Round #797 (Div. 3)
// URL		: https://codeforces.com/contest/1690/problem/C
// Memory Limit : 256 MB
// Time Limit	: 2000 ms


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t=1;
	cin>>t;
	for(ll T=1;T<=t;T++){
		ll n;
		cin>>n;
		ll st[n+5],ed[n+5];
		for(ll i=0;i<n;i++)cin>>st[i];
		for(ll i=0;i<n;i++)cin>>ed[i];
		for(ll i=1;i<n;i++){
			st[i]=max(ed[i-1],st[i]);
		}
		for(ll i=0;i<n;i++){
			if(i!=0)cout<<" ";
			cout<<ed[i]-st[i];
		}
		cout<<endl;
	}
	return 0;
}