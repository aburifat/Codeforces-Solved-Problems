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
// Problem	: G. White-Black Balanced Subtrees
// Contest	: Codeforces - Codeforces Round #790 (Div. 4)
// URL		: https://codeforces.com/contest/1676/problem/G
// Memory Limit : 256 MB
// Time Limit	: 1000 ms


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<vector<ll>>adj;
vector<bool>visited;
vector<pair<ll,ll>>color;//{while,black}

void init(ll n){
	adj.assign(n+5,vector<ll>());
	visited.assign(n+5,false);
	color.assign(n+5,{0,0});
}

void dfs(ll s){
	visited[s]=true;
	for(ll i=0;i<(ll)adj[s].size();i++){
		if(!visited[adj[s][i]]){
			dfs(adj[s][i]);
			color[s].first+=color[adj[s][i]].first;
			color[s].second+=color[adj[s][i]].second;
		}
	}
}

int main(){
	ll t=1;
	cin>>t;
	for(ll T=1;T<=t;T++){
		ll n;
		cin>>n;
		init(n);
		for(ll i=2;i<=n;i++){
			ll tmp;
			cin>>tmp;
			adj[tmp].push_back(i);
			adj[i].push_back(tmp);
		}
		string s;
		cin>>s;
		for(ll i=0;i<n;i++){
			if(s[i]=='W')color[i+1].first=1;
			else color[i+1].second=1;
		}
		dfs(1);
		ll ct=0;
		for(ll i=1;i<=n;i++){
			if(color[i].first==color[i].second)ct++;
		}
		cout<<ct<<endl;
	}
	return 0;
}