#include<bits/stdc++.h>
using namespace std;

int main()
{
    int R, d;
    cin>>R>>d;
    int n;
    cin>>n;
    int ans=n;
    for(int i=0; i<n; i++)
    {
        int x, y, r;
        cin>>x>>y>>r;
        if((r*2)>d)
        {
            ans--;
            //cout<<"fk 1 : "<<i<<endl;
            continue;

        }
        double tst;
        tst=sqrt((x*x)+(y*y));
        if((tst-r)<(R-d))
        {
            ans--;
            //cout<<"fk 2 : "<<i<<endl;
            continue;

        }
        if((tst+r)>R)
        {
            ans--;
            //cout<<"fk 3 : "<<i<<endl;
            continue;

        }
    }
    cout<<ans<<endl;
    return 0;
}