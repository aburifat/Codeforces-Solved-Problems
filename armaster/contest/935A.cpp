#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n, ct=0;
   cin>>n;
   for(int i=1; i<=n; i++)
   {
       if((n-i)%i==0)
       {
           ct++;
       }
   }
   cout<<ct-1<<endl;
    return 0;
}