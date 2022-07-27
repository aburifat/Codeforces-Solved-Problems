#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, s=0,c=0;
    cin>>n>>a;
    s+=n;
    for(int i=1;s>0;i++)
    {
        c++;
        if(i%a==0)
        {
            s++;
        }
        s--;
    }
    cout<<c<<endl;
    return 0;
}