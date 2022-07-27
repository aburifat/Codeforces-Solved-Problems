#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	//ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//freopen("input.io","r",stdin);
	//freopen("output.io","w",stdout);
	ll t;
	cin>>t;
	ll k;
	while(t--){
		cin>>k;
		ll sqt=sqrt(k);
		ll rem=k-(sqt*sqt);
		ll c=1;
		ll r=sqt;
		if(rem){
			if(rem<=(sqt+1)){
				c=sqt+1;
				r=rem;
			}
			else{
				c=(sqt+1)-(rem-sqt)+1;
				r=sqt+1;
			}
		}
		cout<<r<<" "<<c<<"\n";
	}
	return 0;
}