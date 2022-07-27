#include<bits/stdc++.h>
using namespace std;

vector<int>List[1010];
bool Mark[1010];
int Level[1010];
int sizee[1010];
int sizee2[1010];
int parant[1010]={};
void BFS(int Source)
{
    queue<int>Q;
    Q.push(Source);
    Mark[Source]=true;
    Level[Source]=0;

    while(!Q.empty())
    {
        int N=Q.front();
        Q.pop();
        sizee[N]=List[N].size();
        sizee2[N]=List[N].size();
        //cout<<"size of vector "<<N<<" "<<sizee[N]<<endl;
        if(sizee[N]!=0)
        {
            sizee[parant[N]]--;
        }
        //cout<<"size of vector parent"<<parant[N]<<" "<<sizee[parant[N]]<<endl;
        for(int I=0;I<List[N].size();I++)
        {
            if(Mark[List[N][I]]==false)
            {
                Mark[List[N][I]]=true;
                Level[List[N][I]]=Level[N]+1;
                Q.push(List[N][I]);
            }
        }
    }
}

int main()
{
    int n, tmp;
    cin>>n;
    for(int i=2; i<=n; i++)
    {
        cin>>tmp;
        List[tmp].push_back(i);
        parant[i]=tmp;
    }
    BFS(1);
    for(int i=1; i<=n; i++)
    {
        //cout<<i<<" "<<sizee[i]<<endl;
        if(sizee[i]<3&&sizee[i]!=0)
        {
            cout<<"No"<<endl;
            return 0;
        }
        if(sizee2[i]!=0&&sizee[i]==0)
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}