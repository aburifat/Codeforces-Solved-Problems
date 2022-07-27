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
// Problem	: B. Robots
// Contest	: Codeforces - Educational Codeforces Round 128 (Rated for Div. 2)
// URL		: https://codeforces.com/contest/1680/problem/B
// Memory Limit : 512 MB
// Time Limit	: 2000 ms

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n, m;
		cin>>n>>m;
		vector<string>v;
		for(ll i=0;i<n;i++){
			string s;
			cin>>s;
			v.push_back(s);
		}
		vector<ll>rows,columns;
		for(ll i=0;i<n;i++){
			ll tmp=0;
			for(ll j=0;j<m;j++){
				if(v[i][j]=='R')tmp++;
			}
			rows.push_back(tmp);
		}
		for(ll i=0;i<m;i++){
			ll tmp=0;
			for(ll j=0;j<n;j++){
				if(v[j][i]=='R')tmp++;
			}
			columns.push_back(tmp);
		}
		ll row=0,column=0;
		for(ll i=0;i<n;i++){
			if(rows[i]!=0){
				row=i;
				break;
			}
		}
		for(ll i=0;i<m;i++){
			if(columns[i]!=0){
				column=i;
				break;
			}
		}
		if(v[row][column]=='R')cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}