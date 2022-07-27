#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, maxx=-1, minn=10001, countt=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        if(a>maxx||a<minn)
        {
            maxx=max(maxx,a);
            minn=min(minn,a);
            if(i!=0)
            {
                countt++;
            }
        }
    }
    cout<<countt<<endl;
    return 0;
}