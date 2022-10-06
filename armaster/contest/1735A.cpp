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
// Problem	: A. Working Week
// Contest	: Codeforces - Codeforces Round #824 (Div. 2)
// URL		: https://codeforces.com/contest/1735/problem/A
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
		ll l=max((ll)1,(ll)(n/3)-5);
		ll r=min((ll)(n/3)+5,n-5);
		ll ans=0;
		for(ll i=l;i<=r;i++){
			ll l1=1;
			ll l2=i;
			ll l3=n-4-i;
			ans=max(ans,min(abs(l1-l2),min(abs(l2-l3),abs(l1-l3))));
		}
		cout<<ans<<endl;
	}
	return 0;
}