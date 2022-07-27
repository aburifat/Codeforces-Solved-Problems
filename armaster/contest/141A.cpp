#include<bits/stdc++.h>
using namespace std;

int main()
{
    string h, g, s;
    cin>>h>>g>>s;
    int l1, l2, l3;
    l1=h.size();
    l2=g.size();
    l3=s.size();
    if(l3!=l1+l2)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    int ck=0;
    for(int i=0; i<l1;)
    {
        ck=0;
        for(int j=0; j<l3; j++)
        {
            if(h[i]==s[j])
            {
                s.erase(s.begin()+j);
                h.erase(h.begin()+i);
                l1--;
                l3--;
                ck=1;
                break;
            }
        }
        if(ck==0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    for(int i=0; i<l2;)
    {
        ck=0;
        for(int j=0; j<l3; j++)
        {
            if(g[i]==s[j])
            {
                s.erase(s.begin()+j);
                g.erase(g.begin()+i);
                l2--;
                l3--;
                ck=1;
                break;
            }
        }
        if(ck==0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}