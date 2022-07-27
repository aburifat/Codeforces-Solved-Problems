#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int indx=0, ck=0;
        string s;
        cin>>s;
        if(s[0]=='R')
        {
            if(s[1]-'0'>=0&&s[1]-'0'<=9)
            {
                for(int j=2; j<s.length();j++)
                {
                    if(s[j]=='C')
                    {
                        indx=j;
                        ck=1;
                        break;
                    }
                }
            }
        }
        if(ck==1)
        {
            int row=0;
            for(int j=1; j<indx; j++)
            {
                row*=10;
                row+=(s[j]-'0');
            }
            //cout<<row<<" row"<<endl;
            int col=0;
            for(int j=indx+1; j<s.length(); j++)
            {
                col*=10;
                col+=(s[j]-'0');
            }
            //cout<<col<<" col"<<endl;
            string t="";
            while(col)
            {
                col--;
                int tmp=col%26;
                col/=26;
                char a='A'+tmp;
                t=a+t;
            }
            cout<<t<<row<<endl;
        }
        else
        {
            for(int j=1; j<s.length(); j++)
            {
                if(s[j]-'0'>=0&&s[j]-'0'<=9)
                {
                    indx=j;
                    break;
                }
            }
            int r=0, c=0;
            for(int j=0; j<indx; j++)
            {
                c*=26;
                c+=(s[j]-'A'+1);
            }
            for(int j=indx; j<s.length(); j++)
            {
                r*=10;
                r+=s[j]-'0';
            }
            cout<<"R"<<r<<"C"<<c<<endl;
        }
    }
    return 0;
}