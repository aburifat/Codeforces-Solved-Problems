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
// Problem	: A. Everyone Loves to Sleep
// Contest	: Codeforces - Codeforces Round #811 (Div. 3)
// URL		: https://codeforces.com/contest/1714/problem/0
// Memory Limit : 256 MB
// Time Limit	: 2000 ms
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
		ll n,h,m;
		cin>>n>>h>>m;
		ll init=(h*60)+m;
		vector<ll>dif;
		for(ll i=0;i<n;i++){
			ll a,b;
			cin>>a>>b;
			ll tmp=(a*60)+b;
			tmp-=init;
			if(tmp<0)tmp+=(24*60);
			dif.push_back(tmp);
		}
		sort(dif.begin(),dif.end());
		cout<<(dif[0]/60)<<" "<<(dif[0]%60)<<endl;
	}
	return 0;
}