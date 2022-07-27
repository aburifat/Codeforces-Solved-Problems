#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a[6];
    for(int i=0; i<6; i++)
    {
        cin>>a[i];
    }
    long long sum, res;
    sum=a[3]+a[4]+a[5];
    res=(sum*sum)-(a[1]*a[1])-(a[3]*a[3])-(a[5]*a[5]);
    cout<<res<<endl;
    return 0;
}