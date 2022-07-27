#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int h, m;
    cin>>h>>m;
    if(m%10==7||h%10==7)
    {
        cout<<"0"<<endl;
        return 0;
    }
    int ct=0;
    for(;m%10!=7&&h%10!=7;)
    {
        ct++;
        m=m-n;
        if(m<0)
        {
            h=h-1;
            if(h<0)
            {
                h=24+h;
            }
            m=60+m;
        }
    }
    cout<<ct<<endl;
    return 0;
}