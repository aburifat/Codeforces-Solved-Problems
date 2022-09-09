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
// Problem	: C. Build Permutation
// Contest	: Codeforces - Codeforces Round #812 (Div. 2)
// URL		: https://codeforces.com/contest/1713/problem/C
// Memory Limit : 256 MB
// Time Limit	: 1000 ms
//  
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll getNxtSq(ll n){
	ll val=sqrt(n);
	if((val*val)==n)return n;
	else return (val+1)*(val+1);
}

int main(){
	ll t=1;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll arr[n+5];
		for(ll i=0;i<n;i++){
			arr[i]=-1;
		}
		for(ll i=n-1;i>=0;i--){
			if(arr[i]!=-1)continue;
			ll nxtSq=getNxtSq(i);
			ll l=nxtSq-i;
			ll r=i;
			while(l<=r){
				arr[l]=r;
				arr[r]=l;
				l++;
				r--;
			}
			
		}
		for(ll i=0;i<n;i++){
			if(i!=0)cout<<" ";
			cout<<arr[i];
		}
		cout<<endl;
	}
	return 0;
}