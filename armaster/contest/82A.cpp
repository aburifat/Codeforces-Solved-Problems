#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, ck=0;
    cin>>n;
    for(int i=5;;i=i*2)
    {
        if(n>i)
        {
            n=n-(i);
        }
        else
        {
            for(int j=1; j<=5; j++)
            {
                if(n<=((i/5)*j))
                {
                    ck=j;
                    break;
                }
            }
            break;
        }
    }
    if(ck==1)
    {
        cout<<"Sheldon"<<endl;
    }
    else if(ck==2)
    {
        cout<<"Leonard"<<endl;
    }
    else if(ck==3)
    {
        cout<<"Penny"<<endl;
    }
    else if(ck==4)
    {
        cout<<"Rajesh"<<endl;
    }
    else if(ck==5)
    {
        cout<<"Howard"<<endl;
    }
    return 0;
}