#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	//ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//freopen("input.io","r",stdin);
	//freopen("output.io","w",stdout);
	ll t;
	cin>>t;
	ll n;
	string s;
	while(t--){
		cin>>n>>s;
		n=s.length();
		ll ck=0;
		for(ll i=0;i<n-1;i++){
			if(s[i]!=s[i+1]){
				cout<<i+1<<" "<<i+2<<"\n";
				ck=1;
				break;
			}
		}
		if(ck==0)cout<<"-1 -1\n";
	}	
	return 0;
}