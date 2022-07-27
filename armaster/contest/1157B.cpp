#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int p[12];
    for(int i=1; i<=9; i++){
        cin>>p[i];
    }
    int index=-1;
    for(int i=0; i<n; i++){
        int tmp=s[i]-'0';
        if(tmp<p[tmp]){
            index=i;
            break;
        }
    }
    if(index!=-1){
    for(int i=index; i<n; i++){
        int tmp=s[i]-'0';
        if(tmp<=p[tmp]){
            s[i]=p[tmp]+'0';
        }
        else{
            break;
        }
    }
    }
    cout<<s<<endl;
    return  0;
}