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
// Problem	: A. Two 0-1 sequences
// Contest	: Codeforces - CodeTON Round 2 (Div. 1 + Div. 2, Rated, Prizes!)
// URL		: https://codeforces.com/contest/1704/problem/0
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
		ll n,m;
		cin>>n>>m;
		string a,b;
		cin>>a>>b;
		bool ck=true;
		for(int i=m-1,j=n-1;i>=1;i--,j--){
			if(b[i]!=a[j]){
				ck=false;
				break;
			}
		}
		int idx=n-m;
		if(b[0]!=a[idx]){
			bool tmp=false;
			if(b[0]=='0'){
				for(int i=0;i<n-m;i++){
					if(a[i]=='0'){
						tmp=true;
						break;
					}
				}
			}else{
				for(int i=0;i<n-m;i++){
					if(a[i]=='1'){
						tmp=true;
						break;
					}
				}
			}
			if(tmp==false)ck=false;
		}
		if(ck)cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}