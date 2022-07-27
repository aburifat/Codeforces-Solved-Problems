#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, h, tmp, c=0;
    cin>>n>>h;
    while(n--)
    {
        cin>>tmp;
        if(tmp>h)
        {
            c++;
        }
        c++;
    }
    cout<<c<<endl;
    return 0;
}