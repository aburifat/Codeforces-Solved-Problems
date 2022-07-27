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
// Problem	: F. 3SUM
// Contest	: Codeforces - Codeforces Round #799 (Div. 4)
// URL		: https://codeforces.com/contest/1692/problem/F
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
		ll arr[n+5];
		ll nums[10];
		for(ll i=0;i<10;i++)nums[i]=0;
		for(ll i=0;i<n;i++){
			cin>>arr[i];
		}
		for(ll i=0;i<n;i++){
			arr[i]%=10;
			//cout<<arr[i]<<" ";
			nums[arr[i]]++;
		}
		//cout<<endl;
		vector<ll>v;
		for(ll i=0;i<10;i++){
			ll ct=min(nums[i],(ll)3);
			for(ll j=0;j<ct;j++){
				v.push_back(i);
				//cout<<i<<endl;	
			}
		}
		ll len=v.size();
		ll ck=0;
		for(ll i=0;i<len;i++){
			for(ll j=i+1;j<len;j++){
				for(ll k=j+1;k<len;k++){
					ll val=v[i]+v[j]+v[k];
					val%=10;
					if(val==3)ck=1;
				}
			}
		}
		if(ck)cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}