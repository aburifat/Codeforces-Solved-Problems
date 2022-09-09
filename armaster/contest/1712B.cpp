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
// Problem	: B. Woeful Permutation
// Contest	: Codeforces - Codeforces Round #813 (Div. 2)
// URL		: https://codeforces.com/contest/1712/problem/B
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
		for(ll i=0;i<n;i++)arr[i]=i+1;
		ll idx=0;
		if(n%2!=0)idx++;
		for(ll i=idx;i<n;i+=2){
			swap(arr[i],arr[i+1]);
		}
		for(ll i=0;i<n;i++){
			if(i!=0)cout<<" ";
			cout<<arr[i];
		}
		cout<<endl;
	}
	return 0;
}