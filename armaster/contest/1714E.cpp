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
// Problem	: E. Add Modulo 10
// Contest	: Codeforces - Codeforces Round #811 (Div. 3)
// URL		: https://codeforces.com/contest/1714/problem/E
// Memory Limit : 256 MB
// Time Limit	: 2000 ms
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
		vector<ll>v;
		for(ll i=0;i<n;i++){
			ll tmp;
			cin>>tmp;
			v.push_back(tmp);
		}
		ll t1=0,t2=0;
		for(ll i=0;i<n;i++){
			if(v[i]%5==0)t1++;
			else t2++;
		}
		sort(v.begin(),v.end());
		if(t1&&t2)cout<<"No\n";
		else if(t1){
			ll ck=0;
			for(ll i=0;i<n;i++){
				while(v[i]%10!=0){
					v[i]+=(v[i]%10);
				}
			}
			for(ll i=1;i<n;i++){
				if(v[i-1]!=v[i]){
					cout<<"No\n";
					ck=1;
					break;
				}
			}
			if(!ck)cout<<"Yes\n";
		}else{
			for(ll i=0;i<n;i++){
				while(v[i]%10!=2){
					v[i]+=(v[i]%10);
				}
			}
			sort(v.begin(),v.end());
			ll ck=0;
			for(ll i=0;i<n-1;i++){
				ll dif=abs(v[n-1]-v[i]);
				if(dif%20!=0){
					cout<<"No\n";
					ck=1;
					break;
				}
			}
			if(!ck)cout<<"Yes\n";
		}
	}
	return 0;
}