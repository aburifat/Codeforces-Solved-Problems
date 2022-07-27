#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    vector<int>v1, v2;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        int tmp;
        cin>>tmp;
        v1.push_back(tmp);
    }
    for(int i=0; i<m; i++)
    {
        int tmp;
        cin>>tmp;
        v2.push_back(tmp);
    }
    int sum1=0, sum2=0, ct=0;
    for(int i=0, j=0; ;)
    {
        //cout<<"Sum 1 : "<<sum1<<" sum 2 : "<<sum2<<" v1[i] v2[j] "<<v1[i]<<" "<<v2[j]<<endl;
        if(sum1==sum2)
        {
            if(sum1!=0)
            {
                sum1=0;
                sum2=0;
                ct++;
                if(i==n&&j==m)
                {
                    break;
                }
                continue;
            }
            else
            {
                sum1+=v1[i];
                sum2+=v2[j];
                i++;
                j++;
                continue;
            }
        }
        else if(sum1<sum2)
        {
            sum1+=v1[i];
            i++;
            continue;
        }
        else if(sum1>sum2)
        {
            sum2+=v2[j];
            j++;
            continue;
        }
    }
    cout<<ct<<endl;
    return 0;
}