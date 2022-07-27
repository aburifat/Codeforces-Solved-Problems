#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int l=s.size();
    int a=0,b=0;
    for (int i=0; i<l; i++)
    {
        if(s[i]>'a'-1&&s[i]<'z'+1)
        {
            a++;
        }
        else
            b++;
    }
    if(a>=b)
    {
        for (int i=0; i<l; i++)
        {
            if(s[i]>'a'-1&&s[i]<'z'+1);
            else
                s[i]+='a'-'A';
        }
    }
    else
    {
        for (int i=0; i<l; i++)
        {
            if(s[i]>'a'-1&&s[i]<'z'+1)
                s[i]-='a'-'A';
        }
    }
    cout<<s<<endl;
    return 0;
}