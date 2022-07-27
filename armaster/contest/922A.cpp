#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b;
    cin>>a>>b;
    if(b==0)
    {
        printf("No\n");
        return 0;
    }
    if(b==1&&a>0)
    {
        printf("No\n");
        return 0;
    }
    b--;
    a-=b;
    if(a%2==0&&a>=0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}