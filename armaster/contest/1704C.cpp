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
// Problem	: C. Virus
// Contest	: Codeforces - CodeTON Round 2 (Div. 1 + Div. 2, Rated, Prizes!)
// URL		: https://codeforces.com/contest/1704/problem/C
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
		ll n,k;
		cin>>n>>k;
		vector<ll>bad;
		for(ll i=0;i<k;i++){
			ll tmp;
			cin>>tmp;
			bad.push_back(tmp);
		}
		sort(bad.begin(),bad.end());
		vector<ll>v;
		for(ll i=1;i<bad.size();i++){
			v.push_back(bad[i]-bad[i-1]-1);
		}
		ll cy=bad[0]-1;
		cy+=(n-bad[bad.size()-1]);
		if(cy>0)v.push_back(cy);
		sort(v.begin(),v.end());
		ll pan=1;
		ll save=0;
		ll ct=0;
		for(ll i=v.size()-1;i>=0;i--){
			//cout<<"VV: "<<v[i]<<endl;
			if(v[i]-(4*ct+1)>0){
				save+=(v[i]-(4*ct+1));
			}else if(v[i]-(4*ct+1)==0)save+=1;
			ct++;
		}
		cout<<n-save<<endl;
	}
	return 0;
}