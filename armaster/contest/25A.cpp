#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    int n, a=0, b=0, tmp;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>tmp;
        v.push_back(tmp);
        if(tmp%2==0)
        {
            a++;
        }
        else
            b++;
    }
    if(b>a)
    {
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]%2==0)
            {
                cout<<i+1<<endl;
                return 0;
            }
        }
    }
    else
    {
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]%2!=0)
            {
                cout<<i+1<<endl;
                return 0;
            }
        }
    }
    return 0;
}