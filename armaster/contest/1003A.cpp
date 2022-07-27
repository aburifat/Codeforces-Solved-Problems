#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, tmp;
    cin>>n;
    map<int,int>m;
    int maxx=0;
    for(int i=0; i<n; i++)
    {
        cin>>tmp;
        m[tmp]++;
        maxx=max(maxx,m[tmp]);
    }
    cout<<maxx<<endl;
    return 0;
}