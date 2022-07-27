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
// Problem	: B. Patchouli's Magical Talisman
// Contest	: Codeforces - Codeforces Round #796 (Div. 2)
// URL		: https://codeforces.com/contest/1688/problem/B
// Memory Limit : 256 MB
// Time Limit	: 1000 ms

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll arr[n+5];
		ll ct=0;
		for(ll i=0;i<n;i++){
			cin>>arr[i];
			if(arr[i]%2==0)ct++;
		}
		if(ct!=n){
			cout<<ct<<endl;
		}else{
			ll minFus=LONG_LONG_MAX;
			for(ll i=0;i<n;i++){
				ll num=arr[i];
				ll tmp=0;
				while(num){
					tmp++;
					num/=2;
					if(num%2==1)break;
				}
				minFus=min(minFus,tmp);
			}
			cout<<(minFus+ct-1)<<endl;
		}
	}
	return 0;
}