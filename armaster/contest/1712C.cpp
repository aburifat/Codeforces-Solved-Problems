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
// Problem	: C. Sort Zero
// Contest	: Codeforces - Codeforces Round #813 (Div. 2)
// URL		: https://codeforces.com/contest/1712/problem/C
// Memory Limit : 256 MB
// Time Limit	: 1000 ms


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t=1;
	cin>>t;
	for(ll T=1;T<=t;T++){
		ll n;
		cin>>n;
		vector<ll>v,w;
		for(ll i=0;i<n;i++){
			ll tmp;
			cin>>tmp;
			v.push_back(tmp);
		}
		w=v;
		sort(w.begin(),w.end());
		ll ck=1;
		for(ll i=0;i<n;i++){
			if(v[i]!=w[i]){
				ck=0;
				break;
			}
		}
		if(ck){
			cout<<"0\n";
			continue;
		}
		map<ll,bool>dis;
		for(ll i=0;i<=n;i++)dis[i]=false;
		for(ll i=0;i<n-1;i++){
			if(v[i]>v[i+1])dis[v[i]]=true;
		}
		ll idx=-1;
		for(ll i=0;i<n;i++){
			if(dis[v[i]]==true){
				idx=i;
			}
		}
		for(ll i=idx;i>=0;i--)dis[v[i]]=true;
		for(ll i=0;i<n;i++){
			if(dis[v[i]]==true){
				idx=i;
			}
		}
		//cout<<"IDX: "<<idx<<endl;
		if(idx==-1)cout<<"0\n";
		else{
			map<ll,ll>mp;
			vector<ll>what;
			for(ll i=0;i<=idx;i++){
				if(!mp[v[i]])what.push_back(v[i]);
				mp[v[i]]++;
			}
			cout<<what.size()<<endl;
		}
	}
	return 0;
}