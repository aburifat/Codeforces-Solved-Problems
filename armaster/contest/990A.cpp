#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n, m, a, b, k, p, ans, ans2;
	cin>>n>>m>>a>>b;
	if(m>n)
	{
		n+=m;
	}
	k=n%m;
  p=m-k;
  ans=k*b;
  ans2=p*a;
  if(ans2<ans)
  {
  	ans=ans2;
  }
  cout<<ans<<endl;
	return 0;
}