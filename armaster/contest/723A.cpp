#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3];
    int maxx=0, minn=101;
    for(int i=0; i<3; i++)
    {
        cin>>arr[i];
        maxx=max(maxx,arr[i]);
        minn=min(minn,arr[i]);
    }
    cout<<maxx-minn<<endl;
    return 0;
}