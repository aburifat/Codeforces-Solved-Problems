/*******Bismillahir-Rahmanir-Rahim**********/
/*
Name         : Abu Rifat Muhammed Al Hasib
Institution  : University of Barisal, Bangladesh
Github       : https://github.com/abu-rifat/
Codeforces   : https://codeforces.com/profile/Elvengard/
AtCoder      : https://atcoder.jp/users/elvengard/
codechef     : https://www.codechef.com/users/aburifat
SPOJ         : abu_rifat
UvaOJ        : aburifat
DevSkill     : abu_rifat
lightoj      : Abu Rifat Muhammed Al Hasib
website		 : https://aburifat.com/
facebook     : https://www.facebook.com/AbuRifatM/
linkedin     : https://www.linkedin.com/in/aburifat/
Email        : rifat.cse4.bu@gmail.com, armalhasib@gmail.com, abu.rifat.m@gmail.com
*/

/*
Online Judge : 
Algorithm    : 
complexity   : 
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	//ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//freopen("input.io","r",stdin);
	//freopen("output.io","w",stdout);
	ll t;
	cin>>t;
	while(t--){
		ll n, h;
		cin>>n>>h;
		vector<ll>v;
		for(ll i=0;i<n; i++){
			ll tmp;
			cin>>tmp;
			v.push_back(tmp);
		}
		sort(v.begin(),v.end());
		ll mx=v[n-1]+v[n-2];
		ll bg=v[n-1];
		ll ct=h/mx;
		h-=(ct*mx);
		ct*=2;
		if(h!=0){
			if(h<=bg)ct++;
			else ct+=2;
		}
		cout<<ct<<"\n";
	}
	return 0;
}