#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, mm, maxx=0;
    cin>>n;
    map<int,int>m;
    for(int i=0; i<n; i++)
    {
        cin>>mm;
        m[mm]++;
        maxx=max(maxx,m[mm]);
    }
    cout<<maxx<<endl;
    return 0;
}