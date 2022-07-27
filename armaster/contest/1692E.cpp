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
// Problem	: E. Binary Deque
// Contest	: Codeforces - Codeforces Round #799 (Div. 4)
// URL		: https://codeforces.com/contest/1692/problem/E
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
		ll n,x;
		cin>>n>>x;
		vector<ll>arr;
		ll mxSum=0;
		for(ll i=0;i<n;i++){
			ll tmp;
			cin>>tmp;
			mxSum+=tmp;
			arr.push_back(tmp);
		}
		if(mxSum==x){
			cout<<"0\n";
			continue;
		}else if(mxSum<x){
			cout<<"-1\n";
			continue;
		}
		ll res=0;
		ll L=0;
		ll sum=0;
		for(ll i=0;i<n;i++){
			sum+=arr[i];
			while(sum>x){
				sum-=arr[L++];
			}
			res=max(res,i-L+1);
		}
		cout<<n-res<<endl;
	}
	return 0;
}