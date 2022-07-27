#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a=0, b=0, c=0,ck=0;
    string s;
    cin>>s;
    long long l=s.size();
    int t;
    for(long long i=0; i<l; i++)
    {
        if(i==0)
        {
            if(s[i]!='a')
            {
                ck=1;
                break;
            }
            t=(int)s[i];
        }
        if((int)s[i]<t)
           {
               ck=1;
               break;
           }
           t=(int)s[i];
        if(s[i]=='a')
        {
            a++;
        }
        else if(s[i]=='b')
        {
            b++;
        }
        else if(s[i]=='c')
        {
            c++;
        }
    }
    //cout<<a<<" "<<b<<" "<<c<<endl;
    if(c==a||c==b)
    {
        if(ck==0)
        {
            if(a>0&&b>0)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}