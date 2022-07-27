#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin>>r>>c;
    getchar();
    char ch[r+5][c+5];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%c", &ch[i][j]);
        }
        getchar();
    }
     for(int i=0; i<r; i++)
    {
        //cout<<"i"<<endl;
        for(int j=0; j<c; j++)
        {
            //cout<<"j"<<endl;
            if(ch[i][j]=='W')
            {
                //cout<<"W"<<endl;
                if(i!=0 && ch[i-1][j]=='S')
                {
                    cout<<"No"<<endl;
                    return 0;
                }
                else if(i!=r-1 && ch[i+1][j]=='S')
                {
                    cout<<"No"<<endl;
                    return 0;
                }
                else if(j!=0 && ch[i][j-1]=='S')
                {
                    cout<<"No"<<endl;
                    return 0;
                }
                 else if(j!=c-1 && ch[i][j+1]=='S')
                {
                    cout<<"No"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"Yes"<<endl;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(ch[i][j]=='.')
            {
                cout<<"D";
            }
            else
            {
                cout<<ch[i][j];
            }
        }
        cout<<endl;
    }
}