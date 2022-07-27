#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, r, a;
    cin>>l>>r>>a;
    int total=0;
    int m=abs(l-r);
    if(a>=m)
    {
        total=l+r+m;
        a-=m;
    }
    else
    {
        int minn=min(l,r);
        minn+=a;
        a=0;
        total=(2*minn);
    }
    if(a!=0)
    {
        a/=2;
        a*=2;
        total+=a;
    }
    cout<<total<<endl;
    return 0;
}