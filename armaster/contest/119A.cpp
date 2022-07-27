#include<bits/stdc++.h>
using namespace std;

int mod(int n)
{
    if(n<0)
    {
        return n*-1;
    }
    else
        return n;
}

long long gcd(long long n1, long long n2)
{
    while(n1 != n2)
    {
        if(n1==0)
        {
            return n2;
        }
        if(n2==0)
        {
            return n1;
        }
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    return n1;
}

int main()
{
    long long b, a[2];
    cin>>a[0]>>a[1]>>b;
    int tmp=0;
    while(1)
    {
        b=b-gcd(a[tmp],b);
        if(b<0)
        {
            cout<<mod(tmp-1)<<endl;
            return 0;
        }
        else if(tmp==0)
            tmp=1;
        else if(tmp==1)
            tmp=0;
    }
    return 0;
}