#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n,m, num=1, ans;
    cin>>n>>m;
    for(unsigned long long i=1; i<=n; i++)
    {
        if(num>m)
        {
            cout<<m<<endl;
            return 0;
        }
        num=num*2;
    }
    ans=m%num;
    cout<<ans<<endl;
    return 0;
}