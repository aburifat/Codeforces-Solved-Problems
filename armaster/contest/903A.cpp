#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,x;
	cin >> n;
	while (n--) {
		cin >> x;
		while (x>0)
		{
		    if(x%3==0)
            {
                break;
            }
            else
                x-=7;
		}
		if (x<0)
		cout<<"NO"<<endl;
		else
            cout<<"YES"<<endl;
	}
	return 0;
}