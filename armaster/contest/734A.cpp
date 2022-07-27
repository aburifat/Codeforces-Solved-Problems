#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a=0, d=0;
    char ch;
    cin>>n;
    for (int i=0; i<n; i++)
    {
        cin>>ch;
        if(ch=='A')
        {
            a++;
        }
        if(ch=='D')
        {
            d++;
        }
    }
    if(a==d)
        cout<<"Friendship"<<endl;
    else if(a>d)
        cout<<"Anton"<<endl;
    else if(a<d)
        cout<<"Danik"<<endl;
    return 0;
}