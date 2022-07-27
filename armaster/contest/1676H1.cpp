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
// Problem	: H2. Maximum Crossings (Hard Version)
// Contest	: Codeforces - Codeforces Round #790 (Div. 4)
// URL		: https://codeforces.com/contest/1676/problem/H2
// Memory Limit : 256 MB
// Time Limit	: 1000 ms


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update>

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	ll t=1;
	cin>>t;
	for(ll T=1;T<=t;T++){
		ll n;
		cin>>n;
		ordered_set s;
		ll ans=0;
		for(ll i=0;i<n;i++){
			ll tmp;
			cin>>tmp;
			if(s.size()>0){
				ll idx=s.order_of_key(tmp);
				if(idx<i){
					ll val=i-idx;
					ans+=val;
				}
			}
			s.insert(tmp);
		}
		cout<<ans<<endl;
	}
	return 0;
}