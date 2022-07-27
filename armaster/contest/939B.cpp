#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k, maxx=(-1), indx=(-1), mx, type=1000000000000000005;
    cin>>n>>k;
    long long tmp;
    for(long long i=1; i<=k; i++)
    {
        scanf("%lld", &tmp);
        mx=(n/tmp)*tmp;
        if(mx>=maxx)
        {
            maxx=mx;
            indx=i;
            type=tmp;
        }
    }
    cout<<indx<<" "<<(n/type)<<endl;
    return 0;
}