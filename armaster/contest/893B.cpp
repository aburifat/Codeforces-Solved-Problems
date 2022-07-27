#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, s[10]={523776,130816,32640,8128,2016,496,120,28,6,1};
    cin>>n;
    for(int i=0; i<10; i++)
    {
        if(n>=s[i]&&(n%s[i]==0))
        {
            cout<<s[i]<<endl;
            break;
        }
    }
    return 0;
}