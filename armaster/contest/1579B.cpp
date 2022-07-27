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
		ll n;
		cin>>n;
		vector<ll>st,v;
		for(ll i=0;i<n;i++){
			ll tmp;
			cin>>tmp;
			v.push_back(tmp);
		}
		st=v;
		sort(st.begin(),st.end());
		ll ct=0;
		ll ls[n+5],rs[n+5],ds[n+5];
		for(ll i=0;i<n;i++){
			if(st[i]!=v[i]){
				ll idx=i;
				for(ll j=i+1;j<n;j++){
					if(st[i]==v[j]){
						idx=j;
						break;
					}
				}
				for(ll k=idx;k>i;k--){
					v[k]=v[k-1];
				}
				v[i]=st[i];
				ls[ct]=i+1;
				rs[ct]=idx+1;
				ds[ct]=idx-i;
				ct++;
			}
		}

		cout<<ct<<"\n";
		for(ll i=0;i<ct;i++){
			cout<<ls[i]<<" "<<rs[i]<<" "<<ds[i]<<"\n";
		}
	}
	return 0;
}