#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll>ok;

void pre(){
	for(ll i=1;i<=100000;i++){
		if((i%3!=0)&&(i%10!=3))ok.push_back(i);
	}
}

int main(){
	//ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//freopen("input.io","r",stdin);
	//freopen("output.io","w",stdout);
	ll t;
	cin>>t;
	ll k;
	pre();
	while(t--){
		cin>>k;
		cout<<ok[k-1]<<endl;
	}
	return 0;
}