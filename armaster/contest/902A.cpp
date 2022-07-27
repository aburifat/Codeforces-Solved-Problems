#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, d;
    int a[101], b[101], c[101];
    for(int i=0; i<101; i++)
    {
        c[i]=-1;
    }
    cin>>n>>d;
    for(int i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
        for(int j=a[i]+1; j<=b[i]; j++)
        {
            c[j]=a[i];
        }
    }
    while(1)
    {
        if(c[d]==0)
        {
            cout<<"YES"<<endl;
            break;
        }
        else if(c[d]==(-1))
        {
            cout<<"NO"<<endl;
            break;
        }
        else
        {
            d=c[d];
            continue;
        }
    }
    return 0;
}