#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x, a, b, m=0, p=0;
		cin >> x;
		cin>>a>>b;
		while (x>0)
		{
		    if(x%a==0)
            {
                m=x/a;
                break;
            }
            if(x%b==0)
            {
                p=x/b;
                break;
            }
            else
                x-=b;
                p++;
		}
		if (x<0)
		cout<<"NO"<<endl;
		else
            {
                cout<<"YES"<<endl;
                cout<<m<<" "<<p<<endl;
            }

	return 0;
}