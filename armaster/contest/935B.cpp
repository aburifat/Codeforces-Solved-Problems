#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n, ct=0, x=0, y=0, ck=0;
   string s;
   cin>>n;
   cin>>s;
   for(int i=0; i<s.size(); i++)
   {
      if(i==0)
      {
          if(s[i]=='U')
          {
              y+=1;
          }
          else
          {
              x+=1;
          }
          if(x>y)
          {
              ck=1;
          }
          else
          {
              ck=-1;
          }
      }
      else
      {
           if(s[i]=='U')
          {
              y+=1;
          }
          else
          {
              x+=1;
          }
          if(ck==1&&(y>x))
          {
              ck=-1;
              ct++;
          }
          else if(ck==-1&&(x>y))
          {
              ck=1;
              ct++;
          }
      }
   }
   cout<<ct<<endl;
    return 0;
}