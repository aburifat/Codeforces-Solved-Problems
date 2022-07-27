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
// Problem	: B. Array Decrements
// Contest	: Codeforces - Codeforces Round #797 (Div. 3)
// URL		: https://codeforces.com/contest/1690/problem/B
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
		ll arrA[n+5],arrB[n+5];
		for(ll i=0;i<n;i++)cin>>arrA[i];
		for(ll i=0;i<n;i++)cin>>arrB[i];
		ll idx=-1;
		for(ll i=0;i<n;i++){
			if(arrB[i]!=0){
				idx=i;
				break;
			}
		}
		ll ck=0;
		if(idx!=-1){
			ll def=arrA[idx]-arrB[idx];
			for(ll i=idx+1;i<n;i++){
				if(arrB[i]!=0){
					def=max(def,arrA[i]-arrB[i]);
				}
			}
			if(def<0)ck=1;
			else{
				for(ll i=0;i<n;i++){
					arrA[i]-=def;
					if((arrB[i]==0)&&(arrA[i]<0))arrA[i]=0;
				}
				for(ll i=0;i<n;i++){
					if(arrA[i]!=arrB[i]){
						ck=1;
						break;
					}
				}
			}
		}
		if(!ck)cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}