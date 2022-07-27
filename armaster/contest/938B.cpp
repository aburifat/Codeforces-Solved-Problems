#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n, s1=1, s2=1000000;
   cin>>n;
   for(int i=0; i<n; i++)
   {
       int tmp;
       scanf("%d", &tmp);
       if(tmp<=500000)
       {
           s1=max(s1, tmp);
       }
       else
       {
           s2=min(s2, tmp);
       }
   }
   int ans=max((s1-1), (1000000-s2));
   cout<<ans<<endl;
    return 0;
}