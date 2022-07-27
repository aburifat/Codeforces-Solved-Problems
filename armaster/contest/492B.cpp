#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, l, tmp;
    double maxx;
    vector<long long>v;
    cin>>n>>l;
    for(int i=0; i<n; i++)
    {
        cin>>tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    maxx=max(v[0], l-v[n-1]);
    for(int i=0; i<n-1; i++)
    {
        maxx=max(maxx, (v[i+1]-v[i])/2.0);
    }
    printf("%.10lf\n", maxx);
    return 0;
}