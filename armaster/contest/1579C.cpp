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
		ll n,m,k;
		cin>>n>>m>>k;
		char arr[n+5][m+5];
		for(ll i=0;i<n;i++){
			for(ll j=0;j<m;j++){
				cin>>arr[i][j];
			}
		}
		for(ll i=n-1;i>=0;i--){
			for(ll j=0;j<m;j++){
				if((arr[i][j]=='*')||(arr[i][j]=='#')){
					ll xd=i, yd=j, ct=0, fuck=0;
					for(ll p=i-1,y1=j+1,y2=j-1;p>=0,y1<m,y2>=0;p--,y1++,y2--){
						if(((arr[p][y1]=='*')||((arr[p][y1]=='#')))&&((arr[p][y2]=='*')||(arr[p][y2]=='#'))){
							ct++;
							if(arr[p][y1]=='*'||arr[p][y2]=='*')fuck=1;
						}
						else break;
					}
					if(ct>=k&&fuck==1){
						arr[i][j]='#';
						ll p=i-1,y1=j+1,y2=j-1;
						for(ll d=0;d<ct;d++){
							if(p<0||y1>=m||y1<0)break;
							arr[p][y1]='#';
							arr[p][y2]='#';
							p--;
							y1++;
							y2--;
						}
					}
				}
			}
		}
		ll ck=0;
		for(ll i=0;i<n;i++){
			for(ll j=0;j<m;j++){
				if(arr[i][j]=='*'){
					ck=1;
					break;
				}
			}
		}
		if(ck==0)cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}