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
// Problem	: A. Minimums and Maximums
// Contest	: Codeforces - Educational Codeforces Round 128 (Rated for Div. 2)
// URL		: https://codeforces.com/contest/1680/problem/A
// Memory Limit : 512 MB
// Time Limit	: 2000 ms

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll a, b, c, d;
		cin>>a>>b>>c>>d;
		map<ll,ll>mp;
		for(ll i=a;i<=b;i++){
			mp[i]=1;
		}
		ll mn=-1;
		for(ll i=c;i<=d;i++){
			if(mp[i]){
				mn=i;
				break;
			}
		}
		if(mn==-1)mn=a+c;
		else mn=min(mn,a+c);
		cout<<mn<<endl;
	}
	return 0;
}