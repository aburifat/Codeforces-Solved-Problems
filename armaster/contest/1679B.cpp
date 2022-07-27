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
// Problem	: B. Stone Age Problem
// Contest	: Codeforces - Codeforces Round #791 (Div. 2)
// URL		: https://codeforces.com/contest/1679/problem/B
// Memory Limit : 256 MB
// Time Limit	: 2000 ms


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	ll t=1;
	for(ll T=1;T<=t;T++){
		ll n,q;
		cin>>n>>q;
		vector<ll>ans;
		map<ll,ll>mp;
		ll sum=0;
		for(ll i=1;i<=n;i++){
			ll tmp;
			cin>>tmp;
			mp[i]=tmp;
			sum+=tmp;
		}
		ll def=0;
		for(ll i=0;i<q;i++){
			ll a,b,c;
			cin>>a;
			if(a==1){
				cin>>b>>c;
				if(!mp[b])sum-=def;
				else sum-=mp[b];
				sum+=c;
				mp[b]=c;
				ans.push_back(sum);
			}else{
				cin>>c;
				mp.clear();
				def=c;
				sum=(c*n);
				ans.push_back(sum);
			}
		}
		for(ll i=0;i<(ll)ans.size();i++){
			cout<<ans[i]<<endl;
		}
	}
	return 0;
}