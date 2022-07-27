#include<bits/stdc++.h>
using namespace std;

int main()
{
    int M;
    cin>>M;
    int i, counter=0;
    for(i=1;M>0;i++)
    {
        M=M-i-counter;
        counter+=i;
    }
    if(M<0)
    {
        i--;
    }
    cout<<i-1<<endl;
    return 0;
}