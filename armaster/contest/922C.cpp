#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<long long, long long>m;
    long long n, k, ck=0;
    cin>>n>>k;
    for(int i=1; i<=k;i++)
    {
        long long l=n%i;
       m[l]++;
       if(m[l]>1)
       {
           ck=1;
           break;
       }
    }
    if(ck==0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}