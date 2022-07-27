#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, p, c=0;
    cin>>n>>m;
    long long tmp=1;
    for(long long i=0; i<m; i++)
    {
        cin>>p;
        if(p>tmp)
        {
            c+=(p-tmp);
            tmp=p;
        }
        else if(p<tmp)
        {
            c+=(n-tmp);
            c+=p;
            tmp=p;
        }
    }
    cout<<c<<endl;
    return 0;
}