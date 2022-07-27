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

constexpr ll mod=1000000007;

ll binpow(ll base, ll power, ll mod)
{
    base%=mod;
    power=power%(mod-1);
    ll result=1;
    while(power>0){
        if(power&1)result=(result*base)%mod;
        base=(base*base)%mod;
        power>>=1;
    }
    return result;
}

int main(){
	//ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//freopen("input.io","r",stdin);
	//freopen("output.io","w",stdout);
	ll t;
	cin>>t;
	while(t--){
		ll n, k;
		cin>>n>>k;
		vector<ll>dgts;
		while(k){
			ll tmp=k%2;
			k/=2;
			dgts.push_back(tmp);
		}
		ll val=0;
		ll len=dgts.size();
		for(ll i=0;i<len;i++){
			if(dgts[i]==1)val=(val+binpow(n,i,mod))%mod;
		}
		val=val%mod;
		cout<<val<<"\n";
	}
	return 0;
}