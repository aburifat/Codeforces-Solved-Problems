
#include<bits/stdc++.h>
using namespace std;

int arr[100][100];

int main(){
    int x[]={0,0,1,-1};
    int y[]={1,2,1,1};
    string s;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s;
        for(int j=0; j<n; j++){
            if(s[j]=='.'){
                arr[i][j]=1;
            }
            else{
                arr[i][j]=0;
            }
        }
    }
    int ck=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n ; j++){
            if(arr[i][j]==1){
                for(int k=0; k<4; k++){
                    if(i+y[k]>=0&&j+x[k]>=0&&i+y[k]<n&&j+x[k]<n&&arr[i+y[k]][j+x[k]]==1){}
                    else{
                        ck=1;
                    }
                }
                if(ck==0){
                    arr[i][j]=0;
                    for(int k=0; k<4; k++){
                        arr[i+y[k]][j+x[k]]=0;
                    }
                }
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n ; j++){
            if(arr[i][j]==1){
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}