#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long Y, B;
    cin>>Y>>B;
    long long y, g, b;
    cin>>y>>g>>b;
    long long SY=0, SB=0;
    SY=y*2+g;
    SB=b*3+g;
    long long sum=0;
    if(SY>Y)
    {
        sum+=(SY-Y);
    }
    if(SB>B)
    {
        sum+=(SB-B);
    }
    cout<<sum<<endl;
    return 0;
}