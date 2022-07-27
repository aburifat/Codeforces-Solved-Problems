#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long k;
    vector<int>v;
    cin>>n>>k;
    int ck=0;
    if(k>=n)
    {
        ck=1;
    }
    for(int i=0; i<n; i++)
    {
        int tmp;
        cin>>tmp;
        v.push_back(tmp);
    }
    if(ck==1)
    {
        sort(v.begin(), v.end());
        cout<<v[n-1]<<endl;
        return 0;
    }
    else
    {
        int ans=v[0], pt=0;
        for(int i=1;; i++)
        {
            i%=n;
            if(v[i]>ans)
            {
                ans=v[i];
                pt=1;
            }
            else
            {
                pt++;
            }
            if(pt==k)
            {
                break;
            }
        }
        cout<<ans<<endl;
        return 0;
    }
    return 0;
}