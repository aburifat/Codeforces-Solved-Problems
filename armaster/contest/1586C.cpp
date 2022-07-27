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
	ll n, m;
	cin>>n>>m;
	ll arr[n+5][m+5];
	for(ll i=0;i<n;i++){
		string s;
		cin>>s;
		for(ll j=0;j<m;j++){
			if(s[j]=='.')arr[i][j]=1;
			else arr[i][j]=2;
		}
	}
	ll qs[n+5][m+5];
	for(ll i=0;i<n;i++){
		for(ll j=0;j<m;j++){
			if(i==0||j==0)qs[i][j]=0;
			else{
				if(arr[i][j-1]==1||arr[i-1][j]==1)qs[i][j]=0;
				else qs[i][j]=1;
			}
		}
	}
	ll ans[m+5];
	for(ll j=0;j<m;j++){
		ll val=0;
		for(ll i=0;i<n;i++){
			val+=qs[i][j];
		}
		ans[j]=val;
	}
	for(ll i=1;i<m;i++)ans[i]+=ans[i-1];
	ll q;
	cin>>q;
	ll a,b;
	for(ll i=0;i<q;i++){
		cin>>a>>b;
		a--;
		b--;
		ll ck=ans[b]-ans[a];
		if(ck)cout<<"NO\n";
		else cout<<"YES\n";
	}
	return 0;
}