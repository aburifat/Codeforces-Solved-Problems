#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
	ll t;
	cin>>t;
	while(t--){
		ll a,b,c;
		cin>>a>>b>>c;
		ll ck=0;
		ll x,y,z;
		x=a+c;
		if(x>0&&x%2==0){
			x/=2;
			if(x%b==0){
				ck=1;
				//cout<<"F\n";
			}
		}
		y=(2*b)-a;
		if(y>0&&y%c==0&&ck==0){
			ck=1;
			//cout<<"S\n";
		}
		z=(2*b)-c;
		if(z>0&&z%a==0&&ck==0){
			//cout<<"T\n";
			ck=1;
		}
		if(ck==0)cout<<"NO\n";
		else cout<<"YES\n";
	}
	return 0;
}