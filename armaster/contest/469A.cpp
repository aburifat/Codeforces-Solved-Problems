#include<bits/stdc++.h>
using namespace std;

int n;

int main()
{
    int n,a,b,tmp;
    cin>>n;
    bool p[n]={};
    cin>>a;
    for(int i=0;i<a; i++)
    {
        cin>>tmp;
        if(p[tmp-1]==0)
        {
            p[tmp-1]=1;
        }
    }
    cin>>b;
    for(int i=0;i<b; i++)
    {
        cin>>tmp;
        if(p[tmp-1]==0)
        {
            p[tmp-1]=1;
        }
    }

    for(int i=0;i<n; i++)
    {
        if(p[i]==0)
        {
            cout<<"Oh, my keyboard!"<<endl;
            return 0;
        }
    }
    cout<<"I become the guy."<<endl;
    return 0;
}