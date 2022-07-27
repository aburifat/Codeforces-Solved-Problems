#include<bits/stdc++.h>
using namespace std;

int n;

int main()
{
    string a,b;
    int l;
    cin>>a>>b;
    l=a.size();
    for(int i=0; i<l; i++)
    {
        if(a[i]!=b[i])
            cout<<"1";
        else
            cout<<"0";
    }
    cout<<endl;
    return 0;
}