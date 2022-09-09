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
// Problem	: C. Corners
// Contest	: Codeforces - Codeforces Round #815 (Div. 2)
// URL		: https://codeforces.com/contest/1720/problem/C
// Memory Limit : 256 MB
// Time Limit	: 1000 ms
//  
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll dx[]={0,0,1,-1,-1,1,-1,1};
ll dy[]={1,-1,0,0,-1,1,1,-1};

int main(){
	ll t=1;
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
		string arr[n+5];
		for(ll i=0;i<n;i++){
			cin>>arr[i];
		}
		ll ck=2;
		ll ans=0;
		for(ll i=0;i<n;i++){
			for(ll j=0;j<m;j++){
				if(arr[i][j]=='1'){
					ans++;
				}else{
					if(ck==2)ck=1;
					if(ck){
						for(ll k=0;k<8;k++){
							ll x=i+dx[k];
							ll y=j+dy[k];
							if((x<n)&&(x>=0)&&(y<m)&&(y>=0)){
								if(arr[x][y]=='0'){
									ck=0;
								}
							}
						}
					}
				}
			}
		}
		ans-=ck;
		cout<<ans<<endl;
	}
	return 0;
}