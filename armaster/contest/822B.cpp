#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    string s, t;
    cin>>s;
    cin>>t;
    map< vector<int> , int >mp;
    int minn=1000005;
    for(int i=0; i<=m-n; i++)
    {
        vector<int> C;
        for(int j=0; j<n; j++)
        {
            if(s[j]!=t[i+j])
            {
                int tmp=j+1;
                C.push_back(tmp);
            }
        }
        //cout<<"C "<<C<<endl;
        mp[C]=C.size();
        int sz=C.size();
        minn=min(minn,sz);
        //cout<<"minn "<<minn<<endl;
    }
    map< vector<int> , int >::iterator it;
    vector<int> ans;
    for(it=mp.begin(); it!=mp.end(); it++)
    {
        if(it->second==minn)
        {
            ans = it->first;
            break;
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}