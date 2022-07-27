#include<bits/stdc++.h>
using namespace std;

int main()
{
    int X, Y, x1, x2, x3, y1, y2, y3;
    cin>>X>>Y>>x1>>y1>>x2>>y2;
    if(x1<=X&&y1<=Y)
    {
        x3=X-x1;
        y3=Y-y1;
        if((x2<=x3&&y2<=Y)||(x2<=Y&&y2<=x3)||(x2<=X&&y2<=y3)||(x2<=y3&&y2<=X))
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    if(y1<=X&&x1<=Y)
    {
        x3=X-y1;
        y3=Y-x1;
        if((x2<=x3&&y2<=Y)||(x2<=Y&&y2<=x3)||(x2<=X&&y2<=y3)||(x2<=y3&&y2<=X))
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}