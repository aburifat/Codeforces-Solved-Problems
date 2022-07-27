#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt1=0, cnt2=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int s, d;
        cin>>s>>d;
        for(int j=0; cnt1>=cnt2; j++)
        {
            cnt2=s+(d*j);
            //cout<<"count 1 : count2  = "<<cnt1<<" "<<cnt2<<endl;
        }
        cnt1=cnt2;
    }
    cout<<cnt2<<endl;
    return 0;
}