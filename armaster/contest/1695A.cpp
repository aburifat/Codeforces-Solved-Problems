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
// Problem	: A. Subrectangle Guess
// Contest	: Codeforces - Codeforces Round #801 (Div. 2) and EPIC Institute of Technology Round
// URL		: https://codeforces.com/contest/1695/problem/A
// Memory Limit : 256 MB
// Time Limit	: 1000 ms


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t=1;
	cin>>t;
	for(ll T=1;T<=t;T++){
		ll n, m;
		cin>>n>>m;
		ll arr[n+5][m+5];
		ll mxX=-1;
		ll mxY=-1;
		ll mx=LONG_LONG_MIN;
		for(ll i=0;i<n;i++){
			for(ll j=0;j<m;j++){
				cin>>arr[i][j];
				if(mx<arr[i][j]){
					mx=arr[i][j];
					mxX=i;
					mxY=j;
				}
			}
		}
		mxX++;
		mxY++;
		//cout<<mxX<<" "<<mxY<<endl;
		ll x=max(mxX,n-mxX+1);
		ll y=max(mxY,m-mxY+1);
		//cout<<x<<" "<<y<<endl;
		cout<<x*y<<endl;
	}
	return 0;
}