#include<bits/stdc++.h>
using namespace std;

int main()
{


    long long n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        vector<char>v1, v2;
        string s1, s2;
        cin>>s1>>s2;
        long long l1, l2;
        l1=s1.length();
        l2=s2.length();
        for(long long j=0; j<l1; j++)
        {
            v1.push_back(s1[j]);
        }
        for(long long j=0; j<l2; j++)
        {
            v2.push_back(s2[j]);
        }
        int ck=0;
        long long j1, j2;
        if(v1[0]==v2[0])
        {
            for(j1=0,j2=0; j1<l1, j2<l2;)
            {
                if(v1[j1]==v2[j2])
                {
                    j1++;
                    j2++;
                }
                else if(v1[j1-1]==v2[j2])
                {
                    j2++;
                }
                else
                {
                    ck=1;
                    break;
                }
                if(j1>=l1&&j2<l2){
                    while(j2<l2){

                        if(v2[j2]!=v1[l1-1]){
                            ck=1;
                        }
                    j2++;
                    }
                }
            }
        }
        else
        {
            ck=1;
        }
        if(ck==0&&j1>=l1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}