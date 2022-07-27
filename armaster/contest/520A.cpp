#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, tmp, c=0;
    cin>>n;
    bool b[26]= {};
    char ch;
    getchar();
    for(int i=0; i<n; i++)
    {
        cin>>ch;
        ch=tolower(ch);
        tmp=ch-'a';
        if(b[tmp]==0)
        {
            b[tmp]=1;
            c++;
        }
    }
    if(c==26)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}