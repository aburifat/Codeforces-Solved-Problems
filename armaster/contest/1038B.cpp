#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>2)
    {
        cout<<"Yes"<<endl;
        cout<<"1 "<<n<<endl;
        cout<<n-1<<" ";
        for(int i=1; i<=n-1; i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    else
        cout<<"No"<<endl;
    return 0;
}