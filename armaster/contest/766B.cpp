#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    vector<long long>v;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        long long tmp;
        cin>>tmp;
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    for(int i=0; i<n-2; i++)
    {
        if(v[i]+v[i+1]>v[i+2])
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}