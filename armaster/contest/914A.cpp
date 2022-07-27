#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    vector<long long>v;
    for(long long i=0; i<n; i++)
    {
        long long tmp;
        cin>>tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    long long l=v.size();
    for(long long i=l-1; i>=0; i--)
    {
        long long test=v[i];
        if(test<0)
        {
            cout<<test<<endl;
            return 0;
        }
        long long test2=sqrt(test);
        if(test!=test2*test2)
        {
            cout<<test<<endl;
            return 0;
        }
    }
    return 0;
}