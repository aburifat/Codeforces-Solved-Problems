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
// Problem	: B. Luke is a foodie
// Contest	: Codeforces - CodeTON Round 2 (Div. 1 + Div. 2, Rated, Prizes!)
// URL		: https://codeforces.com/contest/1704/problem/B
// Memory Limit : 256 MB
// Time Limit	: 1000 ms
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
		ll n,x;
		cin>>n>>x;
		ll arr[n+5];
		for(ll i=0;i<n;i++){
			cin>>arr[i];
		}
		ll mn=arr[0]-x;
		ll mx=arr[0]+x;
		ll ct=0;
		for(ll i=1;i<n;i++){
			ll l=arr[i]-x;
			ll r=arr[i]+x;
			if(l>mx||mn>r){
				ct++;
				mn=l;
				mx=r;
			}else{
				mn=max(l,mn);
				mx=min(r,mx);
			}
		}
		cout<<ct<<endl;
	}
	return 0;
}