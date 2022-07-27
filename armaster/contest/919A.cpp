#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n, m, minn=10000000;
    cin>>n>>m;
    while(n--)
    {
        double a, b;
        cin>>a>>b;
        minn=min(minn,a/b);
    }
    printf("%.8f \n",minn*m);
    return 0;
}