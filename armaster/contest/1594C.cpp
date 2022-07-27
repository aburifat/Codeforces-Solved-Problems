/*******Bismillahir-Rahmanir-Rahim**********/
/*
Name         : Abu Rifat Muhammed Al Hasib
Institution  : University of Barisal, Bangladesh
Github       : https://github.com/abu-rifat/
Codeforces   : https://codeforces.com/profile/Elvengard/
AtCoder      : https://atcoder.jp/users/elvengard/
codechef     : https://www.codechef.com/users/aburifat
SPOJ         : abu_rifat
UvaOJ        : aburifat
DevSkill     : abu_rifat
lightoj      : Abu Rifat Muhammed Al Hasib
website		 : https://aburifat.com/
facebook     : https://www.facebook.com/AbuRifatM/
linkedin     : https://www.linkedin.com/in/aburifat/
Email        : rifat.cse4.bu@gmail.com, armalhasib@gmail.com, abu.rifat.m@gmail.com
*/

/*
Online Judge : 
Algorithm    : 
complexity   : 
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bitset<300010>bs;

int main(){
	//ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//freopen("input.io","r",stdin);
	//freopen("output.io","w",stdout);
	ll t;
	cin>>t;
	while(t--){
		bs.set();
		ll n;
		char ch;
		cin>>n>>ch;
		string s;
		cin>>s;
		ll ct=0;
		for(ll i=1;i<=n;i++){
			if(s[i-1]==ch)bs[i]=0;
			else ct++;
			//cout<<bs[i]<<" ";
		}
		//cout<<"\n";
		ll ans=0;
		ll ods=0,evns=0;
		vector<ll>vv;
		for(ll i=1;i<=n;i+=2){
			if(bs[i]!=0)ods++;
		}
		for(ll i=2;i<=n;i+=2){
			if(bs[i]!=0)evns++;
		}
		if(ct==0){
			ans=0;
		}
		else if(ods==0||evns==0){
			ll tt=n;
			if(ods==0){
				if(tt%2==0)tt--;
				vv.push_back(tt);
			}else{
				if(n%2!=0)tt--;
				vv.push_back(tt);
			}
			ans=1;
			ct=0;
		}else{
			ans=2;
			ll tt=n;
			if(n%2==0)tt--;
			vv.push_back(2);
			vv.push_back(tt);
		}
		if(ct!=0){
			for(ll i=2;i<=n;i++){
				ll tmp=0;
				if(bs[i]==0){
					for(ll j=i*2;j<=n;j+=i){
						if(bs[j]!=0){
							tmp=1;
							break;
						}
					}
					if(tmp==0){
						ans=1;
						vv.clear();
						vv.push_back(i);
						break;
					}
				}
			}
		}
		cout<<ans<<"\n";
		for(ll i=0;i<ans;i++){
			if(i!=0)cout<<" ";
			cout<<vv[i];
		}
		if(ans)cout<<"\n";
	}
	return 0;
}