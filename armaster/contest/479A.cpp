#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int x, y, z, a, b, c, d, e, f, g, h, i, j, k; cin>> x >> y >> z;

    a=x+y+z;
    b=x*y*z;
    c=(x+y)*z;
    d=x*(y+z);
    h=(x*y)+z;
    i=x+(y*z);
    e=max(a,b);
    f=max(c,d);
    j=max(h,i);
    g=max(e,f);
    k=max(g,j);
    cout<<k<<endl;
    return 0;
}