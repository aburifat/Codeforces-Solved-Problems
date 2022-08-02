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
// Problem	: C. Minimum Varied Number
// Contest	: Codeforces - Codeforces Round #811 (Div. 3)
// URL		: https://codeforces.com/contest/1714/problem/C
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
		ll n;
		cin>>n;
		ll cr=9;
		ll num=0;
		while(n){
			ll dgt=min(cr,n);
			num*=10;
			num+=dgt;
			n-=dgt;
			cr--;
		}
		n=num;
		num=0;
		while(n){
			num*=10;
			num+=(n%10);
			n/=10;
		}
		cout<<num<<endl;
	}
	return 0;
}