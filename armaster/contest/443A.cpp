#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tmp;
    char ch;
    set<char>s;
    while(1)
    {
        cin>>ch;
        if(ch>'a'-1&&ch<='z')
        {
            s.insert(ch);
        }
        if(ch=='}')
            break;
    }
    cout<<s.size()<<endl;
    return 0;
}