#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long x, a, b, diff;
		cin >> x;
		a=x/10;
		b=a*10;
		diff=x-b;
		if(diff<=5)
        {
            cout<<b<<endl;
        }
            else
                cout<<b+10<<endl;
	return 0;
}