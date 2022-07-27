#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m;
    cin>>n>>m;
    if(m==1)
    {
        if(n==1)
        {
            cout<<m<<endl;
        }
        else
            cout<<m+1<<endl;
    }
    else if((n/2)>=m)
    {
        cout<<m+1<<endl;
    }
    else
        cout<<m-1<<endl;
    return 0;
}