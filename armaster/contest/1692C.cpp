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
// Problem	: C. Where's the Bishop?
// Contest	: Codeforces - Codeforces Round #799 (Div. 4)
// URL		: https://codeforces.com/contest/1692/problem/C
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
		vector<string>s;
		for(ll i=0;i<8;i++){
			string st;
			cin>>st;
			s.push_back(st);
		}
		ll ck=0;
		for(ll i=1;i<7;i++){
			for(ll j=1;j<7;j++){
				if(s[i-1][j-1]=='#'&&s[i+1][j+1]=='#'&&s[i-1][j+1]=='#'&&s[i+1][j-1]=='#'&&s[i][j]=='#'){
					ck=1;
					cout<<i+1<<" "<<j+1<<endl;
					break;
				}
			}
			if(ck)break;
		}
	}
	return 0;
}