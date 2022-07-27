#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    char ch;
    int tmp;
    while(1)
    {
        ch=getchar();
        if(ch=='\n')
        {
            break;
        }
        tmp=ch-'0';
        v.push_back(tmp);
    }
    int l=v.size();
    for(int i=0; i<l; i++)
    cout<<v[i];
    for(int i=l-1; i>=0; i--)
    cout<<v[i];
    return 0;
}