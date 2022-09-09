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
// Problem	: B. Interesting Sum
// Contest	: Codeforces - Codeforces Round #815 (Div. 2)
// URL		: https://codeforces.com/contest/1720/problem/B
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
		vector<ll>v;
		for(ll i=0;i<n;i++){
			ll tmp;
			cin>>tmp;
			v.push_back(tmp);
		}
		sort(v.begin(),v.end());
		cout<<v[n-1]+v[n-2]-v[0]-v[1]<<endl;
	}
	return 0;
}