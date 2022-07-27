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
    if(l>1)
    {
        l=v[l-1];
    }
    else
        l=v[0];
    long long ct=0;
    int ck=0;
    for(long long i=(v.size()-1); i>=0; i--)
    {
        if(v[i]==l)
        {
            ct++;
        }
        else
            {
                if(ct%2==0)
                {
                    ct=1;
                    l=v[i];
                }
                else
                {
                    ck=1;
                    break;
                }
            }
    }
    if(ct%2!=0)
    {
        ck=1;
    }
    if(ck==0)
    {
        cout<<"Agasa"<<endl;
    }
    else
    {
        cout<<"Conan"<<endl;
    }
    return 0;
}