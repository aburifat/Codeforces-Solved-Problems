#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, d, ans=2;
    vector<long long>v;
    cin>>n>>d;
    for(long long i=0; i<n; i++)
    {
        long long tmp;
        cin>>tmp;
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    for(long long i=0; i<n-1; i++)
    {
        long long tmp=v[i+1]-v[i];
        if((tmp/2)>=d)
        {
            long long minn=(tmp-(2*d-1));
            if(minn>1)
            {
                ans+=2;
            }
            else
            {
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}