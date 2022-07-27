#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k, tmp, ans=0;
    vector<long long>v, v1, v2, v3;
    cin>>n>>k;
    for(long long i=0; i<n; i++)
    {
        cin>>tmp;
        v.push_back(tmp);
    }
    v1=v;
    sort(v1.begin(),v1.end());
    for(long long i=n-1; i>=n-k; i--)
    {
        v2.push_back(v1[i]);
        ans+=v1[i];
    }
    long long ct=0, key=0, gt=0;
    for(long long i=0; i<n; i++)
    {
        key=v[i];
        vector<long long>::iterator position = find(v2.begin(), v2.end(), key);
        if (position != v2.end())
        {
            v2.erase(position);
            if(gt==0)
            {
                v3.push_back((i-ct+1));
                gt++;
            }
            else
            v3.push_back((i-ct));
            ct=i;
        }
    }
    v3[v3.size()-1]+=(n-ct-1);
    cout<<ans<<endl;
    for(long long i=0; i<v3.size(); i++)
    {
        cout<<v3[i]<<" ";
    }
    return 0;
}