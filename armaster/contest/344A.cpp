#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, c=0, tmp=0, a;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        if(a!=tmp)
        {
            c++;
            tmp=a;
        }
    }
    cout<<c<<endl;
    return 0;
}