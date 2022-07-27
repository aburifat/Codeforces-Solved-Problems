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
// Problem	: F. Longest Strike
// Contest	: Codeforces - Codeforces Round #790 (Div. 4)
// URL		: https://codeforces.com/contest/1676/problem/F
// Memory Limit : 256 MB
// Time Limit	: 1000 ms


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t=1;
	cin>>t;
	for(ll T=1;T<=t;T++){
		ll n,k;
		cin>>n>>k;
		ll arr[n+5];
		for(ll i=0;i<n;i++){
			cin>>arr[i];
		}
		map<ll,ll>mp,ck;
		vector<ll>vals;
		for(ll i=0;i<n;i++){
			mp[arr[i]]++;
			if(!ck[arr[i]]&&mp[arr[i]]>=k){
				ck[arr[i]]++;
				vals.push_back(arr[i]);
			}
		}
		sort(vals.begin(),vals.end());
		ll st=-1,ed=-1;
		pair<ll,ll>maxDis={-1,-1};
		if(vals.size()>0){
			st=vals[0],ed=vals[0];
			maxDis={st,ed};
		}
		for(ll i=1;i<(ll)vals.size();i++){
			//cout<<"vals: "<<st<<" "<<vals[i]<<endl;
			if((vals[i]-1)!=vals[i-1]){
				ll dis=ed-st;
				if(dis>=(maxDis.second-maxDis.first)){
					maxDis={st,ed};
				}
				st=vals[i];
			}
			ed=vals[i];
			//cout<<st<<" sted "<<ed<<endl;
			if(i==vals.size()-1){
				ll dis=ed-st;
				if(dis>=(maxDis.second-maxDis.first)){
					maxDis={st,ed};
				}
			}
		}
		if(maxDis.first!=-1){
			cout<<maxDis.first<<" "<<maxDis.second<<endl;
		}else{
			cout<<"-1\n";
		}
	}
	return 0;
}