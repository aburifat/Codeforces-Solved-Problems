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
// Problem	: A. Print a Pedestal (Codeforces logo?)
// Contest	: Codeforces - Codeforces Round #797 (Div. 3)
// URL		: https://codeforces.com/contest/1690/problem/0
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
		ll val=n/3;
		ll rem=n%3;
		ll a,b,c;
		a=b=c=val;
		if(rem==0){
			b++;
			c--;
		}else if(rem==1){
			b+=2;
			c--;
		}else{
			a++;
			b+=2;
			c--;
		}
		cout<<a<<" "<<b<<" "<<c<<endl;
	}
	return 0;
}