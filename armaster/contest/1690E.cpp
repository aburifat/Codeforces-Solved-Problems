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
// Problem	: E. Price Maximization
// Contest	: Codeforces - Codeforces Round #797 (Div. 3)
// URL		: https://codeforces.com/contest/1690/problem/E
// Memory Limit : 256 MB
// Time Limit	: 2000 ms


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t=1;
	cin>>t;
	for(ll T=1;T<=t;T++){
		ll n,k;
		cin>>n>>k;
		vector<ll>v;
		ll sum=0;
		for(ll i=0;i<n;i++){
			ll tmp;
			cin>>tmp;
			sum+=(tmp/k);
			tmp=tmp%k;
			if(!tmp)continue;
			v.push_back(tmp);
			//cout<<tmp<<" ";
		}
		/*
		cout<<endl;
		cout<<"Sum: "<<sum<<endl;
		*/
		ll len=v.size();
		sort(v.begin(),v.end());
		for(ll i=0,j=len-1;i<j;){
			ll val=v[i]+v[j];
			if(val<k){
				i++;
				continue;
			}
			sum+=(val/k);
			i++;
			j--;
		}
		cout<<sum<<endl;
	}
	return 0;
}