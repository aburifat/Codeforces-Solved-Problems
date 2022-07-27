#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, tmp;
    cin>>n;
    for(long long i=0; i<n; i++)
    {
        cin>>tmp;
        if(tmp%2==0)
        {
            tmp--;
        }
        cout<<tmp<<" ";
    }
    return 0;
}