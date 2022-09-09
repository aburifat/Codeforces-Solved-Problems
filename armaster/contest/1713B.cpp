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
// Problem	: B. Optimal Reduction
// Contest	: Codeforces - Codeforces Round #812 (Div. 2)
// URL		: https://codeforces.com/contest/1713/problem/B
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
		vector<ll>v,tst;
		ll n;
		cin>>n;
		for(ll i=0;i<n;i++){
			ll tmp;
			cin>>tmp;
			v.push_back(tmp);
		}
		ll idx=0;
		ll ct=0;
		for(ll i=1;i<n;i++){
			if(v[i]>=v[i-1])ct++;
			else break;
		}
		if(ct==n-1){
			cout<<"YES\n";
			continue;
		}
		ct=0;
		for(ll i=1;i<n;i++){
			if(v[i]<=v[i-1])ct++;
			else break;
		}
		if(ct==n-1){
			cout<<"YES\n";
			continue;
		}
		ll idx1=-1,idx2=-1;
		for(ll i=1;i<n;i++){
			if(v[i]<v[i-1]){
				idx1=i-1;
				idx2=i;
				break;
			}
		}
		if(idx1!=-1&&idx2!=-1){
			ll ctl=0;
			for(ll i=1;i<=idx1;i++){
				if(v[i]>=v[i-1])ctl++;
				else break;
			}
			ll ctr=0;
			for(ll i=idx2+1;i<n;i++){
				if(v[i]<=v[i-1])ctr++;
				else break;
			}
			if(ctl==idx1&&ctr==(n-ctl-2)){
				cout<<"YES\n";
				continue;
			}
		}
		/*
		idx1=-1,idx2=-1;
		for(ll i=1;i<n;i++){
			if(v[i]>v[i-1]){
				idx1=i-1;
				idx2=i;
				break;
			}
		}
		if(idx1!=-1&&idx2!=-1){
			ll ctl=0;
			for(ll i=1;i<=idx1;i++){
				if(v[i]<=v[i-1])ctl++;
				else break;
			}
			ll ctr=0;
			for(ll i=idx2+1;i<n;i++){
				if(v[i]>=v[i-1])ctr++;
				else break;
			}
			if(ctl==idx1&&ctr==(n-ctl-2)){
				cout<<"YES\n";
				continue;
			}
		}
		*/
		cout<<"NO\n";
	}
	return 0;
}