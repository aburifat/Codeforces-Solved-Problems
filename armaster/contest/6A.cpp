#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    int ck=0;
    for(int i=0; i<4; i++)
    {
        int tmp;
        cin>>tmp;
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    for(int i=3; i>1;i--)
    {
        for(int j=i-1; j>0; j--)
        {
            if(v[j]+v[j-1]>v[i])
            {
                cout<<"TRIANGLE"<<endl;
                return 0;
            }
            else if(v[j]+v[j-1]==v[i])
            {
                ck=1;
            }
        }
    }
    (ck==1)?cout<<"SEGMENT"<<endl:cout<<"IMPOSSIBLE"<<endl;
    return 0;
}