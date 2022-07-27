#include<bits/stdc++.h>
using namespace std;

int n;
bool b[1000000]={};
void IsPrime(int n)
{
    b[0]=1;
    b[1]=1;
    for(int i=4; i<=n; i+=2)
    {
        b[i]=1;
    }
    for(int i=3; i<=n&&(b[i]!=1); i+=2)
    {
        for(int j=2;i*j<=n;j++)
        {
            b[i*j]=1;
        }
    }
}

int main()
{
    IsPrime(1000000);
    int n;
    cin>>n;
    for(int i=4; i<n; i++)
    {
        if(b[i]==1&&b[n-i]==1)
        {
            cout<<i<<" "<<n-i<<endl;
            break;
        }
    }
    return 0;
}