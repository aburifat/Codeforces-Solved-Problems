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
// Problem	: A. Cirno's Perfect Bitmasks Classroom
// Contest	: Codeforces - Codeforces Round #796 (Div. 2)
// URL		: https://codeforces.com/contest/1688/problem/0
// Memory Limit : 256 MB
// Time Limit	: 1000 ms

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mx=1e5+9;

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<bool>v;
		ll num=n;
		while(num){
			v.push_back(num%2);
			num/=2;
		}
		//reverse(v.begin(),v.end());
		ll len=v.size();
		ll idx,l;
		ll ck=0;
		for(ll i=0;i<len;i++){
			if(v[i]==true){
				idx=i;
				break;
			}
		}
		for(ll i=0;i<len;i++){
			//cout<<v[i]<<" ";
			if(v[i]==true)l=i;
		}
		//cout<<endl;
		ll ans=0;
		if(l!=idx)ans=(1<<idx);
		else{
			if(idx==0)ans=3;
			else{
				ans=(1<<idx);
				ans++;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}