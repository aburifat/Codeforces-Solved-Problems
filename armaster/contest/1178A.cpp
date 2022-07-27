#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0, party=0;
    vector<int>ind;
    cin>>n;
    int arr[n+5];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    party+=arr[0];
    int iam=(sum/2)+1;
    ind.push_back(1);
    if(iam<=arr[0]){
        cout<<"1"<<endl<<"1";
        return 0;
    }
    for(int i=1; i<n; i++){
        if((arr[0]/2)>=arr[i]){
            party+=arr[i];
            ind.push_back(i+1);
        }
        if(party>=iam){
            cout<<ind.size()<<endl;
            for(int j=0; j<ind.size(); j++){
                cout<<ind[j]<<" ";
            }
            cout<<endl;
            return 0;
        }

    }
    if(party>=iam){
            cout<<ind.size()<<endl;
            for(int j=0; j<ind.size(); j++){
                cout<<ind[j]<<" ";
            }
            cout<<endl;
            return 0;
        }else{
            cout<<"0"<<endl;
        }
    return 0;
}