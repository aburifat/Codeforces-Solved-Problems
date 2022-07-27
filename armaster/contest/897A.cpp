#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    string x;
    cin>>x;
    int c, d;
    char m, n;
    for(int i=0; i<b; i++)
    {
        cin>>c>>d>>m>>n;
        for(int i=c-1; i<d; i++)
        {
            if(x[i]==m)
            {
                x[i]=n;
            }
        }
    }
    cout<<x<<endl;
    return 0;
}