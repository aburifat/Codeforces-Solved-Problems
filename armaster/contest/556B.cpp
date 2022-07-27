#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int tmp;
    cin>>tmp;
    int ck=n-tmp, cn=0;
    if(tmp!=0)
    {
        for(int i=1; i<n; i++)
        {
            cin>>tmp;
            if(i%2==0)
            {
                int t=i-tmp;
                if(t<0)
                {
                    t+=n;
                }
                if(t!=ck)
                {
                    cn=1;
                }
            }
            else
            {
                int t=tmp-i;
                if(t<0)
                {
                    t+=n;
                }
                if(t!=ck)
                {
                    cn=1;
                }
            }
        }
        if(cn==0)
            cout<<"Yes"<<endl;
        else if(cn==1)
            cout<<"No"<<endl;
    }
    else
    {
        int cn=0;
        for(int i=1; i<n; i++)
        {
            cin>>tmp;
            if(tmp!=i)
            {
                cn=1;
            }
        }
        if(cn==0)
            cout<<"Yes"<<endl;
        else if(cn==1)
            cout<<"No"<<endl;
    }
    return 0;
}