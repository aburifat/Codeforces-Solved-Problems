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
// Problem	: B. All Distinct
// Contest	: Codeforces - Codeforces Round #799 (Div. 4)
// URL		: https://codeforces.com/contest/1692/problem/B
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
		map<ll,ll>mp;
		for(ll i=0;i<n;i++){
			ll tmp;
			cin>>tmp;
			if(!mp[tmp])v.push_back(tmp);
			mp[tmp]++;
		}
		ll len=v.size();
		ll dup=0;
		for(ll i=0;i<len;i++){
			dup+=(mp[v[i]]-1);
		}
		ll ans=n-dup;
		if(dup%2!=0)ans--;
		cout<<ans<<endl;
	}
	return 0;
}