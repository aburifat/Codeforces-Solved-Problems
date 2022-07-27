#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l, n;
    cin>>l>>n;
    int d[1000],b[1000];
    for(int i=0; i<n; i++)
    {
        scanf("%d %d", &d[i], &b[i]);
    }
    int tmp1, tmp2;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(d[j]>d[j+1])
            {
                tmp1=d[j];
                tmp2=b[j];
                d[j]=d[j+1];
                b[j]=b[j+1];
                d[j+1]=tmp1;
                b[j+1]=tmp2;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        if(d[i]>=l)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        else
        {
            l+=b[i];
        }
    }
    cout<<"YES"<<endl;
    return 0;
}