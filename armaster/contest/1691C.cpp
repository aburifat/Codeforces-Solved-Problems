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
// Problem	: C. Sum of Substrings
// Contest	: Codeforces - CodeCraft-22 and Codeforces Round #795 (Div. 2)
// URL		: https://codeforces.com/contest/1691/problem/C
// Memory Limit : 256 MB
// Time Limit	: 1000 ms


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t=1;
	cin>>t;
	for(ll T=1;T<=t;T++){
		ll n, k;
		cin>>n>>k;
		string s;
		cin>>s;
		ll l=-50,r=-50;
		for(ll i=0;i<n;i++)
		for(ll i=n-1;i>=0;i--){
			if(s[i]!='0')break;
			else r=i;
		}
		if((k>=(n-r))&&(r-1>=0)&&(r-1<n-1)){
			s[r-1]='0';
			s[n-1]='1';
			k-=(n-r);
		}
		for(ll i=0;i<n;i++){
			if(s[i]!='0')break;
			else l=i;
		}
		if((k>=(l+1))&&(l+1>0)&&(l+1<n-1)){
			s[l+1]='0';
			s[0]='1';
			k-=(l+1);
		}
		ll ans=0;
		for(ll i=1;i<n;i++){
			if(s[i-1]=='0'){
				if(s[i]=='1')ans+=1;
			}else{
				if(s[i]=='0')ans+=10;
				else ans+=11;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}