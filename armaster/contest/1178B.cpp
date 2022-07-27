#include<bits/stdc++.h>
using namespace std;




int main()
{
    vector<long long>v;
    long long ans=0,cnto=0,cntv=0,s1=0,s2=0;
    string s;
    cin>>s;
    long long len=s.size();
    for(long long i=0;i<len;i++){
        if(s[i]=='v'){
            cntv=0;
            cnto++;
        }
        else if(s[i]=='o'){
                if(cnto>1&&cntv==0){
                v.push_back((cnto-1));
                s1+=(cnto-1);
                }
                cnto=0;
            v.push_back(0);
            cntv++;
        }
    }
    if(cnto>1){
        v.push_back((cnto-1));
        s1+=(cnto-1);
    }

    len=v.size();
    for(int i=0;i<len;i++){
           if(v[i]){
            s2+=v[i];
           }
        else if(v[i]==0){
            long long tmp=s1-s2;
            ans+=(tmp*s2);
        }

    }
    cout<<ans<<endl;
}