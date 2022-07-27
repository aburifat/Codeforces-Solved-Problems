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


bitset<100000009>bs;
vector<ll>primes;
void sieve(ll ub)
{
    bs.set();
    ub++;
    bs[0]=bs[1]=0;
    primes.push_back(2);
    for(ll i=4;i<=ub;i+=2)bs[i]=0;
    for(ll i=3;i<=ub;i+=2){
        if(bs[i]){
            for(ll j=i*i;j<=ub;j+=i)bs[j]=0;
            primes.push_back(i);
        }
    }
}

int main(){
	//ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//freopen("input.io","r",stdin);
	//freopen("output.io","w",stdout);
	ll t;
	cin>>t;
	sieve(100000);
	while(t--){
		ll n;
		cin>>n;
		ll sum=0;
		ll arr[n+4];
		for(ll i=0;i<n; i++){
			cin>>arr[i];
			sum+=arr[i];
		}
		ll idx=-1;
		if(bs[sum]){
			for(ll i=0;i<n;i++){
				if(bs[sum-arr[i]]==0){
					idx=i;
					break;
				}
			}
		}
		ll ct=n;
		if(idx!=-1)ct--;
		cout<<ct<<"\n";
		ll done=0;
		for(ll i=0;i<n;i++){
			if(i==idx)continue;
			if(done!=0)cout<<" ";
			if(done==0)done=1;
			cout<<i+1;
		}
		cout<<"\n";
	}
	return 0;
}