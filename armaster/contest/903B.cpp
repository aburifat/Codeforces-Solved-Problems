#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, e;
    int sum=0, arr[10000]={}, t=1;
    cin>>a>>b>>c>>d>>e;
    while(t++)
    {
        if(a<=e&&d>b)
        {
            a+=c;
            a-=e;
            arr[t-2]=1;
            //cout<<"HEAL"<<endl;
            sum++;
        }
        else
        {
            a-=e;
            d-=b;
            arr[t-2]=(-1);
            //cout<<"STRIKE"<<endl;
            sum++;
            if(d<=0)
            {
                break;
            }

        }
    }
    cout<<t-1<<endl;
    for(int i=0; i<t-1; i++)
    {
        if(arr[i]==1)
        {
            cout<<"HEAL"<<endl;
            continue;
        }
        if(arr[i]==(-1))
        {
            cout<<"STRIKE"<<endl;
        }
    }
    return 0;
}