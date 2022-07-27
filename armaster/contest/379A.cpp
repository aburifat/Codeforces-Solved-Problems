#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m,c=0, tmp;
    cin>>n>>m;
    c+=n;
    for(;n>=m;)
    {
        tmp=n%m;
        n=n/m;
        c+=n;
        n=n+tmp;
    }
    cout<<c<<endl;
    return 0;
}