#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum=0, tmp;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>tmp;
        sum+=tmp;
    }
    double ans=(double)sum/(double)n;
    printf("%.12lf\n", ans);
    return 0;
}