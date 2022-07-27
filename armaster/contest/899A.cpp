#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x, a=0, b=0, tmp, t=0;
	cin>>x;
	for(int i=0; i<x; i++)
    {
        cin>>tmp;
        if(tmp==2)
        {
            b++;
        }
        else
        {
            a++;
        }
    }
    if(b<=a)
    {
        t=t+b;
        a=a-b;
        t=t+(a/3);
    }
    else
    {
        t=t+a;
    }
    cout<<t<<endl;
	return 0;
}