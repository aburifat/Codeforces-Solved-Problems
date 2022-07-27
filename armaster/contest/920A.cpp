#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        vector<int>v;
        for(int i=0; i<m; i++)
        {
            int tmp;
            cin>>tmp;
            v.push_back(tmp);
        }
        sort(v.begin(), v.end());
        vector<int>ans;
        int l=n-v[v.size()-1]+1;
        ans.push_back(v[0]);
        ans.push_back(l);
        for(int i=1; i<v.size(); i++)
        {
            int ss=v[i]-v[i-1]+1;
            if(ss%2==0)
            {
                ss=ss/2;
            }
            else
            {
                ss++;
                ss=ss/2;
            }
            ans.push_back(ss);
        }
        stable_sort(ans.begin(),ans.end(),greater<int>());
        cout<<ans[0]<<endl;
    }
    return 0;
}