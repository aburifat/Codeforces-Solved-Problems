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
// Problem	: A. Burenka Plays with Fractions
// Contest	: Codeforces - Codeforces Round #815 (Div. 2)
// URL		: https://codeforces.com/contest/1720/problem/0
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
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		ll val1=a*d;
		ll val2=b*c;
		ll ans;
		ll gcd=__gcd(val1,val2);
		if(val1==val2)ans=0;
		else if(gcd==val1||gcd==val2)ans=1;
		else ans=2;
		cout<<ans<<endl;
	}
	return 0;
}