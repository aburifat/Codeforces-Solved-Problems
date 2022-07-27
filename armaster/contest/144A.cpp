#include<bits/stdc++.h>
using namespace std;

int n;

int main()
{
    int n, maxx=0, minn=100, mi, mx,t;
    int a[100];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        maxx=max(a[i],maxx);
        minn=min(a[i],minn);
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]==maxx)
        {
            mx=i;
            break;
        }

    }
    for(int i=n-1; i>=0; i--)
    {
        if(a[i]==minn)
        {
            mi=i;
            break;
        }
    }
    if(mx<mi)
    {
        t=(mx+n-1-mi);
    }
    else
    {
        t=(mx+n-2-mi);
    }
    cout<<t<<endl;
    return 0;
}