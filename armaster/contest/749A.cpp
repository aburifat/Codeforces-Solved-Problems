#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<int>v;
    cin>>n;
    int countt=n/2;
    if(n%2==0)
    {
        cout<<countt<<endl;
        for(int i=0; i<countt; i++)
        {
            cout<<"2";
            if(i!=(countt-1))
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    else
    {
        cout<<countt<<endl;
        for(int i=0; i<countt-1; i++)
        {
            cout<<"2 ";
        }
        cout<<"3";
        cout<<endl;
    }
}