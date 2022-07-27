#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll t;
	cin>>t;
	while(t--){
		string s,ans;
		cin>>s;
		ll len = s.size();
		if(len%2!=0)ans="NO";
		else{
			ll hf=len/2;
			ll ck=0;
			for(ll i=0,j=hf;i<hf,j<len;i++,j++){
				if(s[i]!=s[j]){
					ck=1;
					break;
				}
			}
			if(ck==1)ans="NO";
			else ans="YES";
		}
		cout<<ans<<"\n";
	}
	return 0;
}