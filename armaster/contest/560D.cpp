#include<bits/stdc++.h>
using namespace std;

string hsh(string s)
{
    if(s.length()&1) return s;
    string s1=hsh(s.substr(0,(s.length()/2)));
    string s2=hsh(s.substr(s.length()/2));
    if(s1<s2)return s1+s2;
    else return s2+s1;
}

int main()
{
    string s1, s2;
    cin>>s1>>s2;
    if(hsh(s1)==hsh(s2))
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}