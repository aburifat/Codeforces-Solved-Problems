#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, t, s=0;
	cin>>n;
	for(int i=5; i>0; i--)
	{
		for(;n>=i;)
		{
			s++;
			n=n-i;
		}
		if(n==0)
		break;
	}
	cout<<s<<endl;
	return 0;
}