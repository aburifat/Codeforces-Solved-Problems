#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ck=0, ck1=0, t, n;
    int g[2]={1,2}, s=3, tmp;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0; i<2; i++)
        {
            if(n==g[i])
            {
                ck1++;
                if(i==0)
                {
                    tmp=g[1];
                    g[1]=s;
                    s=tmp;
                }
                else if(i==1)
                {
                    tmp=g[0];
                    g[0]=s;
                    s=tmp;
                }
                break;
            }

        }
        if(ck1==0)
        {
            ck=1;
            break;
        }
        ck1=0;
    }
    if(ck==0)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}