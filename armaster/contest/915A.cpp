#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, l, ans;
    cin>>n>>l;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int tmp;
        cin>>tmp;
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    for(int i=(v.size()-1); i>=0; i--)
    {
        if(l%v[i]==0)
        {
            ans=l/v[i];
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}