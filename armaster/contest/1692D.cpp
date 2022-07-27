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
// Problem	: D. The Clock
// Contest	: Codeforces - Codeforces Round #799 (Div. 4)
// URL		: https://codeforces.com/contest/1692/problem/D
// Memory Limit : 256 MB
// Time Limit	: 1000 ms
//  
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll hr[]={0,1,2,3,4,5,10,11,12,13,14,15,20,21,22,23};
ll mt[]={0,10,20,30,40,50,1,11,21,31,41,51,2,12,22,32};

int main(){
	map<ll,ll>mp,ck;
	for(ll i=0;i<16;i++){
		mp[hr[i]]=i;
	}
	ll t=1;
	cin>>t;
	while(t--){
		ck.clear();
		string s;
		cin>>s;
		ll x;
		cin>>x;
		ll nowHr=(s[0]-'0')*10+(s[1]-'0');
		ll nowMt=(s[3]-'0')*10+(s[4]-'0');
		ll toMin=(nowHr*60)+nowMt;
		toMin%=1440;
		ll ans=0;
		while(ck[toMin]==0){
			ck[toMin]++;
			nowHr=toMin/60;
			nowMt=toMin%60;
			ll idx=mp[nowHr];
			ll valid=1;
			if(idx==0&&nowHr!=0)valid=0;
			//cout<<nowHr<<" "<<nowMt<<" "<<mt[idx]<<endl;
			if((mt[idx]==nowMt)&&valid){
				//cout<<nowHr<<" "<<nowMt<<" "<<mt[idx]<<endl;
				ans++;
			}
			toMin+=x;
			toMin%=1440;
		}
		cout<<ans<<endl;
	}
	return 0;
}