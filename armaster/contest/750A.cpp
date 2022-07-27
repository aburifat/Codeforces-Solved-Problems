#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin>>N>>M;
    M=240-M;
    int i;
    for(i=1;i<=N&&M>0;i++)
    {
        M=M-5*i;
    }
    if(M<0)
    {
        i--;
    }
    cout<<i-1<<endl;
    return 0;
}