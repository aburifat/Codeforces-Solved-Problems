#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int num1=1, num2=1;
    for(int i=1; i<=n; i++)
    {
        if(i==num2)
        {
            cout<<"O";
            int tmp=num2;
            num2+=num1;
            num1=tmp;
        }
        else
        {
            cout<<"o";
        }
    }
    cout<<endl;
    return 0;
}