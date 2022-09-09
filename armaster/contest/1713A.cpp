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
// Problem	: A. Traveling Salesman Problem
// Contest	: Codeforces - Codeforces Round #812 (Div. 2)
// URL		: https://codeforces.com/contest/1713/problem/0
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
		ll n;
		cin>>n;
		ll mxX=0,mnX=0,mxY=0,mnY=0;
		for(ll i=0;i<n;i++){
			ll a,b;
			cin>>a>>b;
			mxX=max(mxX,a);
			mnX=min(mnX,a);
			mxY=max(mxY,b);
			mnY=min(mnY,b);
		}
		ll ans=0;
		ans+=abs(2*mxX);
		if(mxX>=0&&mnX>=0){
		}else{
			ans+=abs(2*mnX);
		}
		ans+=abs(2*mxY);
		if(mxY>=0&&mnY>=0){
		}else{
			ans+=abs(2*mnY);
		}
		cout<<ans<<endl;
	}
	return 0;
}