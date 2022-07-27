
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        map<long long, long long>m;
        long long n;
        cin>>n;
        long long tmp;
        while(n--){
            cin>>tmp;
            if(tmp%3==0){
                m[3]++;
            }
            else if(tmp%3==2){
                m[2]++;
            }
            else{
                m[1]++;
            }
        }
        long long ans=0;
        ans+=m[3];
        long long rem1=0, rem2=0;
        if(m[2]==m[1]){
            ans+=m[2];
            rem1=0;
            rem2=0;
        }
        else if(m[2]>m[1]){
            ans+=m[1];
            rem2=m[2]-m[1];
            rem1=0;
        }
        else if(m[1]>m[2]){
            ans+=m[2];
            rem1=m[1]-m[2];
            rem2=0;
        }
        ans+=(rem2/3);
        ans+=(rem1/3);
        rem1=rem1%3;
        rem2=rem2%3;
        rem1+=(rem2/2);
        ans+=(rem1/3);
        cout<<ans<<endl;
    }
    return 0;

}