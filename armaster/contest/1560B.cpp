#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	//ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//freopen("input.io","r",stdin);
	//freopen("output.io","w",stdout);
	
	ll t;
	cin>>t;
	ll a, b, c;
	while(t--){
		cin>>a>>b>>c;
		if(a==b)cout<<"-1\n";
		else{
			ll md=abs(b-a);
			ll all=md*2;
			if(max(a,max(b,c))>all)cout<<"-1\n";
			else{
				ll ans = c+md;
				if(ans>all)ans-=all;
				cout<<ans<<"\n";
			}
		}
	}
	
	return 0;
}