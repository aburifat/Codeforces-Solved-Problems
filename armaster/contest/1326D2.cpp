#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


vector<ll>ctPre(string s)
{
    vector<ll>pi;
    ll len=s.size();
    pi.resize(len);
    pi[0]=0;
    for(ll i=1;i<len;i++){
        ll j=pi[i-1];
        while(j>0&&s[i]!=s[j])j=pi[j-1];
        if(s[i]==s[j])j++;
        pi[i]=j;
    }
    return pi;
}

int main()
{
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll len=s.size();
        string tmp=s;
        string tmp2=s;
        reverse(tmp2.begin(),tmp2.end());
        tmp+="#";
        tmp+=tmp2;
        ll tmplen=tmp.size();
        vector<ll>pi1=ctPre(tmp);
        ll anslen1=0;
        for(ll i=len+1;i<tmplen;i++){
            if(pi1[i]>anslen1)anslen1=pi1[i];
            else break;
        }
        if(anslen1==len){
            cout<<s<<"\n";
            continue;
        }
        tmp=s.substr(anslen1,len-(2*anslen1));
        //cout<<tmp<<endl;
        tmp2=tmp;
        reverse(tmp2.begin(),tmp2.end());
        string tmp3=tmp+"#"+tmp2;
        ll tmp3len=tmp3.size();
        vector<ll>pi2=ctPre(tmp3);
        ll anslen2=pi2[tmp3len-1];
        string tmp4=tmp2+"#"+tmp;
        ll tmp4len=tmp4.size();
        vector<ll>pi3=ctPre(tmp4);
        ll anslen3=pi3[tmp4len-1];
        string part1=s.substr(0,anslen1);
        string part3=part1;
        reverse(part3.begin(),part3.end());
        string part2="";
        if(anslen2>=anslen3){
            part2=s.substr(anslen1,anslen2);
        }else{
            part2=s.substr(len-anslen1-anslen3,anslen3);
        }
        cout<<part1<<part2<<part3<<"\n";
    }
    return 0;
}

/*
4
abcabacccba
*/