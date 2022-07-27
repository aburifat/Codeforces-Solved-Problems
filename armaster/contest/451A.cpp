#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c;
	cin>>a>>b;
	if(a>b)
	{
		c=b;
	}
	else
	c=a;
	if(c%2==0)
	{
		cout<<"Malvika"<<endl;
	}
	else
	cout<<"Akshat"<<endl;
	return 0;
}