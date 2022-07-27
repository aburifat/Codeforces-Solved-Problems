#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];

    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
     for(int i=1; i<=n; i++)
    {
        int tmp, tmp1, tmp2;
        tmp=arr[i];
        tmp1=arr[tmp];
        tmp2=arr[tmp1];
        if(i==tmp2&&(tmp!=tmp1)&&(tmp1!=tmp2)&&(tmp!=tmp2))
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}