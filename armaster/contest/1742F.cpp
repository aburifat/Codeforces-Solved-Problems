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
// Problem	: F. Smaller
// Contest	: Codeforces - Codeforces Round #827 (Div. 4)
// URL		: https://codeforces.com/contest/1742/problem/F
// Memory Limit : 256 MB
// Time Limit	: 2000 ms


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void add(vector<ll>&arr, string s, ll k){
	for(ll i=0;i<s.size();i++){
		arr[s[i]-'a']+=k;
	}
}

vector<ll>getIdx(vector<ll>s,vector<ll>t){
	vector<ll>v;
	v.push_back(0);
	ll idx=-1;
	for(ll i=v[0]+1;i<26;i++){
		if(s[i]!=0){
			idx=i;
			break;
		}
	}
	v.push_back(idx);
	idx=0;
	for(ll i=25;i>=1;i--){
		if(t[i]!=0){
			idx=i;
			break;
		}
	}
	v.push_back(idx);
	idx=-1;
	for(ll i=v[2]-1;i>=0;i--){
		if(t[i]!=0){
			idx=i;
			break;
		}
	}
	v.push_back(idx);
	return v;
}

int main(){
	ll t=1;
	cin>>t;
	for(ll T=1;T<=t;T++){
		vector<ll>s,t;
		s.push_back(1);
		t.push_back(1);
		for(ll i=1;i<26;i++){
			s.push_back(0);
			t.push_back(0);
		}
		ll q;
		cin>>q;
		for(ll I=0;I<q;I++){
			ll typ,K;
			string x;
			cin>>typ>>K>>x;
			if(typ==1)add(s,x,K);
			else add(t,x,K);
			vector<ll>val=getIdx(s,t);
			ll i=val[0],j=val[2],k=val[1],l=val[3];
			bool ck=true;
			if(i<j)ck=true;
			else if(i>j)ck=false;
			else{
				if(s[i]<t[j]){
					if(k==-1)ck=true;
					else ck=false;
				}else if(s[i]==t[j]){
					if(k==-1){
						if(l==-1)ck=false;
						else ck=true;
					}else ck=false;
				}else ck=false;
			}
			if(ck)cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
	return 0;
}