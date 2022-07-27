
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, t, sum=0,ct=0;
    cin>>n>>t;
    vector<long long>v1, v2;
    for(long long i=0; i<n; i++){
        long long tmp;
        cin>>tmp;
        v1.push_back(tmp);
        sum+=tmp;
        long long sumtmp=sum;
        if(v2.empty()){
            cout<<"0 ";
        }else{
            if(sumtmp<=t){
                cout<<"0 ";
            }else{
                for(long long j=0; j<v2.size(); j++){
                    sumtmp-=v2[j];
                    if(sumtmp<=t){
                        cout<<j+1<<" ";
                        break;
                    }
                }
            }
        }
        v2.push_back(tmp);
        sort(v2.begin(),v2.end());
        reverse(v2.begin(),v2.end());
    }

    return 0;
}