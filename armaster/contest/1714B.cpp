// /*******Bismillahir-Rahmanir-Rahim**********/
//  
// Name         : Abu Rifat Muhammed Al Hasib
// Institution  : University of Barisal, Bangladesh
// Github       : https://github.com/abu-rifat
// website	: https://a...content-available-to-author-only...t.com
//  
// Codeforces   : https://codeforces.com/profile/ARMaster
// lightoj      : https://lightoj.com/user/abu-rifat
// AtCoder      : https://atcoder.jp/users/aburifat
// codechef     : https://codechef.com/users/aburifat
// SPOJ         : https://spoj.com/users/abu_rifat
// UvaOJ        : https://uhunt.onlinejudge.org/id/889274
//  
// facebook     : https://facebook.com/AbuRifatM
// linkedin     : https://www.linkedin.com/in/aburifat
// Email        : rifat.cse4.bu@gmail.com
// 		  armalhasib@gmail.com
// 		  abu.rifat.m@gmail.com
//  
// Problem	: B. Remove Prefix
// Contest	: Codeforces - Codeforces Round #811 (Div. 3)
// URL		: https://codeforces.com/contest/1714/problem/B
// Memory Limit : 256 MB
// Time Limit	: 2000 ms
//  
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t=1;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll arr[n+5];
		map<ll,ll>mp;
		ll ct=0;
		for(ll i=0;i<n;i++){
			cin>>arr[i];
		}
		for(ll i=n-1;i>=0;i--){
			if(mp[arr[i]])break;
			ct++;
			mp[arr[i]]++;
		}
		cout<<(n-ct)<<endl;
	}
	return 0;
}