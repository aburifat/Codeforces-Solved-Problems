#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    ll a,b;
    string s;
    while(t--)
    {
        cin>>a>>b;
        cin>>s;
        ll n=a+b;
        ll ck=0;
        ll len=(n/2)+(n%2);
        for(ll i=0; i<len; i++)
        {
            if((s[i]!='?')&&(s[n-i-1]!='?')){
                if(s[i]!=s[n-i-1]){
                    ck=1;
                    break;
                }
            }
            if((s[i]=='0')&&(s[n-i-1]=='0'))
            {
                if(i==(n-i-1))
                {
                    if(a>0)a--;
                    else
                    {
                        ck=1;
                        break;
                    }
                }
                else if(a>1)a-=2;
                else
                {
                    ck=1;
                    break;
                }
            }
            else if((s[i]=='1')&&(s[n-i-1]=='1'))
            {
                if(i==(n-i-1))
                {
                    if(b>0)b--;
                    else
                    {
                        ck=1;
                        break;
                    }
                }
                else if(b>1)b-=2;
                else
                {
                    ck=1;
                    break;
                }
            }
        }
        if(ck==0)
        {
            for(ll i=0; i<n; i++)
            {
                if((s[i]=='0')&&(s[n-i-1]=='?'))
                {
                    if(a>1)
                    {
                        s[n-i-1]='0';
                        a-=2;
                    }
                    else
                    {
                        ck=1;
                        break;
                    }
                }
                else if((s[i]=='1')&&(s[n-i-1]=='?'))
                {
                    if(b>1)
                    {
                        s[n-i-1]='1';
                        b-=2;
                    }
                    else
                    {
                        ck=1;
                        break;
                    }
                }
            }
        }
        if(ck==0)
        {
            for(ll i=0; i<n; i++)
            {
                if(s[i]=='?')
                {
                    if(i==(n-i-1)){
                        if(a%2==1){
                            s[i]='0';
                            a--;
                        }
                        else if(b%2==1){
                            s[i]='1';
                            b--;
                        }
                        else{
                            ck=1;
                            break;
                        }
                    }
                    else if(a>1)
                    {
                        s[i]=s[n-i-1]='0';
                        a=a-2;
                    }
                    else if(b>1)
                    {
                        s[i]=s[n-i-1]='1';
                        b=b-2;
                    }
                    else
                    {
                        ck=1;
                        break;
                    }
                }
            }
        }

        if(ck==0)cout<<s<<"\n";
        else cout<<"-1\n";
    }
    return 0;
}