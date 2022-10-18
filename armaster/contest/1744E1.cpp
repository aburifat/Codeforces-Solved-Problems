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
// Problem	: E2. Divisible Numbers (hard version)
// Contest	: Codeforces - Codeforces Round  #828 (Div. 3)
// URL		: https://codeforces.com/contest/1744/problem/E2
// Memory Limit : 256 MB
// Time Limit	: 4000 ms


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll>getDiv(ll a){
	ll sq=sqrt(a);
	vector<ll>v;
	for(ll i=1;i<=sq;i++){
		if(a%i==0){
			v.push_back(i);
			ll j=a/i;
			if(i!=j)v.push_back(j);
		}
	}
	return v;
}

int main(){
	ll t=1;
	cin>>t;
	for(ll T=1;T<=t;T++){
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		vector<ll>div1=getDiv(a);
		vector<ll>div2=getDiv(b);
		vector<ll>div;
		ll len1=div1.size();
		ll len2=div2.size();
		for(ll i=0;i<len1;i++){
			for(ll j=0;j<len2;j++){
				div.push_back(div1[i]*div2[j]);
			}
		}
		ll x=-1,y=-1;
		ll len=div.size();
		for(ll i=0;i<len;i++){
			ll p=div[i];
			ll q=(a*b)/p;
			ll tmpx=((a/p)+1)*p;
			ll tmpy=((b/q)+1)*q;
			if(tmpx>c||tmpy>d)continue;
			ll ab=a*b;
			ll xy=tmpx*tmpy;
			if(xy%ab==0){
				x=tmpx;
				y=tmpy;
				break;
			}
		}
		cout<<x<<" "<<y<<endl;
	}
	return 0;
}