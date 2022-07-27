#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int x, y, v, n;
    double tmp, ans=INT_MAX;
    pair<int,int>mypos;
    pair<pair<int,int>,int>texipos;
    vector<pair<pair<int,int>,int> >vec;
    cin>>x>>y;
    mypos.first=x;
    mypos.second=y;
    //cout<<"mypos "<<mypos.first<<" "<<mypos.second<<endl;
    cin>>n;
    for(int i=0;i<n; i++)
    {
        cin>>x>>y>>v;
        texipos.first.first=x;
        texipos.first.second=y;
        texipos.second=v;
        vec.push_back(texipos);
        //cout<<"texipos "<<texipos.first.first<<" "<<texipos.first.second<<" "<<texipos.second<<endl;
    }
    for(int i=0;i<n; i++)
    {
        texipos=vec[i];
        //cout<<"vec "<<texipos.first.first<<" "<<texipos.first.second<<" "<<texipos.second<<endl;
        tmp=sqrt(((mypos.first-texipos.first.first)*(mypos.first-texipos.first.first))+((mypos.second-texipos.first.second)*(mypos.second-texipos.first.second)));
        tmp=tmp/(double)texipos.second;
        if(tmp<ans)
            ans=tmp;
    }
    cout.precision(20);
    cout<<fixed;
    cout<<ans;
    cout<<endl;
    return 0;
}