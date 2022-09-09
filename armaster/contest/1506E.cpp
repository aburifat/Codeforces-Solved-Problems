// /*******Bismillahir-Rahmanir-Rahim**********/
// 
// Name         : Abu Rifat Muhammed Al Hasib
// Institution  : University of Barisal, Bangladesh
// Github       : https://github.com/abu-rifat
// website		: https://aburifat.com
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
// 				  armalhasib@gmail.com
// 				  abu.rifat.m@gmail.com
// 
// Problem		: E. Restoring the Permutation
// Contest		: Codeforces - Codeforces Round #710 (Div. 3)
// URL			: https://codeforces.com/contest/1506/problem/E
// Memory Limit : 256 MB
// Time Limit	: 2000 ms

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll>p;


void make_set(ll v){
	p[v]=v;
}

ll get_parent(ll v){
	if(p[v]==v)return v;
	p[v]=get_parent(p[v]);
	return p[v];
}

void join_set(ll a, ll b){
	a=get_parent(a);
	b=get_parent(b);
	p[b]=a;
}

int main(){
	ll t=1;
	cin>>t;
	for(ll T=1;T<=t;T++){
		ll n;
		cin>>n;
		ll arr[n+5],mn[n+5],mx[n+5];
		for(ll i=1;i<=n;i++)cin>>arr[i];
		p.assign(n+5,0);
		map<ll,ll>got;
		vector<ll>unused;
		ll idx=0;
		for(ll i=0;i<=n;i++)p[i]=i;
		for(ll i=1;i<=n;i++){
			got[arr[i]]++;
			mx[i]=get_parent(arr[i]);
			join_set(mx[i]-1,arr[i]);
		}
		for(ll i=1;i<=n;i++){
			if(!got[i])unused.push_back(i);
		}
		got.clear();
		for(ll i=1;i<=n;i++){
			if(!got[arr[i]]){
				got[arr[i]]++;
				mn[i]=arr[i];
			}else{
				mn[i]=unused[idx];
				idx++;
			}
		}
		for(ll i=1;i<=n;i++){
			if(i>1)cout<<" ";
			cout<<mn[i];
		}
		cout<<endl;
		for(ll i=1;i<=n;i++){
			if(i>1)cout<<" ";
			cout<<mx[i];
		}
		cout<<endl;
	}
	return 0;
}