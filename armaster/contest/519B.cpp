#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<int>v;
    map<int, int>m, m1, m2;
    for(int i=0; i<t; i++)
    {
        int tmp;
        cin>>tmp;
        v.push_back(tmp);
        m[tmp]++;
    }
    for(int i=0; i<t-1; i++)
    {
        int tmp;
        cin>>tmp;
        m1[tmp]++;
    }
    for(int i=0; i<t-2; i++)
    {
        int tmp;
        cin>>tmp;
        m2[tmp]++;
    }
    int ck=0, fir, sec;
    for(int i=0; i<t; i++)
    {
        if((m[v[i]]>m1[v[i]])&&(m[v[i]]>m2[v[i]])){
                fir=v[i];
                ck++;
        }
        if(m1[v[i]]>m2[v[i]]){
                sec=v[i];
                ck++;
        }
    }
    cout<<fir<<endl<<sec<<endl;
    return 0;
}



//5
//1 5 8 123 7
//123 7 5 1
//5 1 7