#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long tmp;
    set<long long>s;
    for(int i=0; i<4; i++)
    {
        cin>>tmp;
        s.insert(tmp);
    }
    cout<<4-s.size()<<endl;
    return 0;
}