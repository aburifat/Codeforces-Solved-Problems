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
// Problem	: D. X-Sum
// Contest	: Codeforces - Codeforces Round #790 (Div. 4)
// URL		: https://codeforces.com/contest/1676/problem/D
// Memory Limit : 256 MB
// Time Limit	: 2000 ms


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t=1;
	cin>>t;
	for(ll T=1;T<=t;T++){
		ll n,m;
		cin>>n>>m;
		ll arr[n+5][m+5],digArr[n+5][m+5],revDigArr[n+5][m+5];
		for(ll i=0;i<n;i++){
			for(ll j=0;j<m;j++){
				cin>>arr[i][j];
				digArr[i][j]=revDigArr[i][j]=0;
			}
		}
		for(ll i=0;i<m;i++){
			ll x=0,y=i;
			ll dig_sum=0;
			while(x<n&&y<m){
				dig_sum+=arr[x][y];
				x++;
				y++;
			}
			x=0,y=i;
			while(x<n&&y<m){
				digArr[x][y]=dig_sum-arr[x][y];
				x++;
				y++;
			}
		}
		
		for(ll i=0;i<n;i++){
			ll x=i,y=0;
			ll dig_sum=0;
			while(x<n&&y<m){
				dig_sum+=arr[x][y];
				x++;
				y++;
			}
			x=i,y=0;
			while(x<n&&y<m){
				digArr[x][y]=dig_sum-arr[x][y];
				x++;
				y++;
			}
		}
		for(ll i=0;i<m;i++){
			ll x=0,y=i;
			ll dig_sum=0;
			while(x<n&&y>=0){
				dig_sum+=arr[x][y];
				x++;
				y--;
			}
			x=0,y=i;
			while(x<n&&y>=0){
				revDigArr[x][y]=dig_sum-arr[x][y];
				x++;
				y--;
			}
		}
		
		for(ll i=0;i<n;i++){
			ll x=i,y=m-1;
			ll dig_sum=0;
			while(x<n&&y>=0){
				dig_sum+=arr[x][y];
				x++;
				y--;
			}
			x=i,y=m-1;
			while(x<n&&y<m){
				revDigArr[x][y]=dig_sum-arr[x][y];
				x++;
				y--;
			}
		}
		ll maxAns=0;
		for(ll i=0;i<n;i++){
			for(ll j=0;j<m;j++){
				//cout<<arr[i][j]<<"+"<<digArr[i][j]<<"+"<<revDigArr[i][j]<<" ";
				ll val=arr[i][j]+digArr[i][j]+revDigArr[i][j];
				maxAns=max(maxAns,val);
			}
			//cout<<endl;
		}
		cout<<maxAns<<endl;
	}
	return 0;
}