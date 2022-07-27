#include<bits/stdc++.h>
using namespace std;

int n;

int main()
{
    long long n, a, l;
    cin>>n>>a;
    if(n%2==0)
    {
        l=n/2-1;
    }
    else
        l=n/2;
    a=a-1;
    if(a<=l)
    {
        a=a*2+1;
    }
    else
        a=(a-l)*2;
    cout<<a<<endl;
    return 0;
}