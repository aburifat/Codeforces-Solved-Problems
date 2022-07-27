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
// Problem	: B. Circle Game
// Contest	: Codeforces - Codeforces Round #801 (Div. 2) and EPIC Institute of Technology Round
// URL		: https://codeforces.com/contest/1695/problem/B
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
		ll mn=LONG_LONG_MAX;
		for(ll i=0;i<n;i++){
			cin>>arr[i];
			mn=min(mn,arr[i]);
		}
		if(n%2!=0){
			cout<<"Mike\n";	
		}
		else{
			ll ck=0;
			for(ll i=0;i<n;i++){
				arr[i]-=mn;
			}
			for(ll i=0;i<n;i++){
				//cout<<arr[i]<<" ";
				if(arr[i]==0){
					if(i%2==0){
						cout<<"Joe\n";
						break;
					}else{
						cout<<"Mike\n";
						break;
					}
				}
			}
		}
	}
	return 0;
}