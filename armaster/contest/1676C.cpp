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
// Problem	: C. Most Similar Words
// Contest	: Codeforces - Codeforces Round #790 (Div. 4)
// URL		: https://codeforces.com/contest/1676/problem/C
// Memory Limit : 256 MB
// Time Limit	: 2000 ms


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t=1;
	cin>>t;
	for(ll T=1;T<=t;T++){
		ll n,len;
		cin>>n>>len;
		vector<string>v;
		for(ll i=0;i<n;i++){
			string tmp;
			cin>>tmp;
			v.push_back(tmp);
		}
		ll min_dif=LONG_LONG_MAX;
		for(ll i=0;i<n;i++){
			for(ll j=i+1;j<n;j++){
				ll dif=0;
				for(ll k=0;k<len;k++){
					ll val=abs(v[i][k]-v[j][k]);
					dif+=val;
				}
				min_dif=min(min_dif,dif);
			}
		}
		cout<<min_dif<<endl;
	}
	return 0;
}