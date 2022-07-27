#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s, s1="aeiouy";
    cin>>s;
    int l=s.size(), ct=0;
    for(int i=0; i<l; i++)
    {
        if(ct==0)
        {
            cout<<s[i];
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
            {
                ct=1;
            }
        }
        else if(ct==1)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
            {
                continue;
            }
            else
            {
                cout<<s[i];
                ct=0;
            }
        }

    }
    cout<<endl;
    return 0;
}