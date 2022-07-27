#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, tmp, sum1=0, sum2=0, result=0;
    vector<long long>v;
    cin>>n;
    while(n--)
    {
        cin>>tmp;
        v.push_back(tmp);
    }
    for(int i=-1,j=v.size(); i<j;)
    {
        //cout<<"Sum 1 "<<sum1<<" sum 2 "<<sum2<<endl;
        if(sum1==sum2)
        {
            result=sum1;
            i++;
            j--;
            if(i>=j)
            {
                break;
            }
            sum1+=v[i];
            sum2+=v[j];
        }
        else if(sum1<sum2)
        {
            i++;
            if(i>=j)
            {
                break;
            }
            sum1+=v[i];
        }
        else if(sum1>sum2)
        {
            j--;
            if(i>=j)
            {
                break;
            }
            sum2+=v[j];
        }
    }
    cout<<result<<endl;
    return 0;
}