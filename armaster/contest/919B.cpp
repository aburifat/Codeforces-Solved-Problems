#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin>>k;
    long long sum=10;
    while(k--)
    {
        sum+=9;
        long long tmp=sum, d=0;
        while(tmp)
        {
            d+=tmp%10;
            tmp=tmp/10;
        }
        if(d!=10)
        {
            k++;
        }
        //d=0;
    }
    cout<<sum<<endl;
    return 0;
}