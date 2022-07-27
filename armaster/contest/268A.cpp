#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,tmp;
    cin>>n;
    vector<int>a,b;
    for(int i=0; i<n; i++)
    {
        cin>>tmp;
        a.push_back(tmp);
        cin>>tmp;
        b.push_back(tmp);
    }
    int c=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i]==b[j])
            {
                c++;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}