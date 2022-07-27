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

int main(){
	//ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//freopen("input.io","r",stdin);
	//freopen("output.io","w",stdout);
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll arr[n+5];
		for(ll i=0;i<n; i++){
			cin>>arr[i];
		}
		deque<ll>d;
		d.push_front(arr[0]);
		for(ll i=1;i<n;i++){
			if(arr[i]<d[0]){
				d.push_front(arr[i]);
			}else d.push_back(arr[i]);
		}
		
		for(ll i=0;i<n;i++){
			if(i!=0)cout<<" ";
			cout<<d[i];
		}
		cout<<"\n";
	}
	return 0;
}