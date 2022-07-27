#include<bits/stdc++.h>
using namespace std;

int  main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int x, y, z;

    x=k*l;
    x=x/nl;
    y=c*d;
    z=p/np;

    int ams=min(min(x,y),z);
    ams=ams/n;
    cout<<ams<<endl;
    return 0;
}